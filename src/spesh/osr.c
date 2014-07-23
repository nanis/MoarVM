#include "moar.h"

/* Locates deopt index matching OSR point. */
MVMint32 get_osr_deopt_index(MVMThreadContext *tc, MVMSpeshCandidate *cand) {
    /* Calculate offset. */
    MVMint32 offset = (*(tc->interp_cur_op) - *(tc->interp_bytecode_start));

    /* Locate it in the deopt table. */
    MVMint32 i;
    for (i = 0; i < cand->num_deopts; i++)
        if (cand->deopts[2 * i] == offset)
            return i;

    /* If we couldn't locate it, something is really very wrong. */
    MVM_exception_throw_adhoc(tc, "Spesh: get_osr_deopt_index failed");
}

/* Locates deopt index matching OSR finalize point. */
MVMint32 get_osr_deopt_finalize_index(MVMThreadContext *tc, MVMSpeshCandidate *cand) {
    /* Calculate offset. */
    MVMint32 offset = ((*(tc->interp_cur_op) - *(tc->interp_bytecode_start))) - 2;

    /* Locate it in the deopt table. */
    MVMint32 i;
    for (i = 0; i < cand->num_deopts; i++)
        if (cand->deopts[2 * i + 1] == offset)
            return i;

    /* If we couldn't locate it, something is really very wrong. */
    MVM_exception_throw_adhoc(tc, "Spesh: get_osr_deopt_finalize_index failed");
}

/* Called to start OSR. Switches us over to logging runs of spesh'd code, to
 * collect extra type info. */
void MVM_spesh_osr(MVMThreadContext *tc) {
    MVMSpeshCandidate *specialized;
    MVMint32 osr_index;

    /* Check OSR is enabled. */
    if (!tc->instance->spesh_osr_enabled)
        return;

    /* Ensure that we are in a position to specialize. */
    if (!tc->cur_frame->caller)
        return;
    if (!tc->cur_frame->params.callsite->is_interned)
        return;

    /* Produce logging spesh candidate. */
    specialized = MVM_spesh_candidate_setup(tc, tc->cur_frame->static_info,
        tc->cur_frame->params.callsite, tc->cur_frame->params.args, 1);
    if (specialized) {
        /* Set up frame to point to specialized logging code. */
        tc->cur_frame->effective_bytecode    = specialized->bytecode;
        tc->cur_frame->effective_handlers    = specialized->handlers;
        tc->cur_frame->effective_spesh_slots = specialized->spesh_slots;
        tc->cur_frame->spesh_log_slots       = specialized->log_slots;
        tc->cur_frame->spesh_cand            = specialized;
        tc->cur_frame->spesh_log_idx         = 0;
        specialized->log_enter_idx           = 1;

        /* Work out deopt index that applies, and move interpreter into the
         * logging version of the code. */
        osr_index = get_osr_deopt_index(tc, specialized);
        *(tc->interp_bytecode_start) = specialized->bytecode;
        *(tc->interp_cur_op)         = specialized->bytecode +
                                       specialized->deopts[2 * osr_index + 1] +
                                       2; /* Pass over sp_osrfianlize this first time */;
    }
}

/* Finalizes OSR. */
void MVM_spesh_osr_finalize(MVMThreadContext *tc) {
    /* Find deopt index using existing deopt table, for entering the updated
     * code later. */
    MVMSpeshCandidate *specialized = tc->cur_frame->spesh_cand;
    MVMint32 osr_index = get_osr_deopt_finalize_index(tc, specialized);
    MVMJitCode *jc;
    /* Finish up the specialization. */
    MVM_spesh_candidate_specialize(tc, tc->cur_frame->static_info, specialized);

    /* If there are inlinings, need to update ->work and ->env. */
    if (specialized->num_inlines > 0) {
        /* Resize work area. */
        MVMRegister *new_work = MVM_fixed_size_alloc_zeroed(tc, tc->instance->fsa,
            specialized->work_size);
        memcpy(new_work, tc->cur_frame->work,
            tc->cur_frame->static_info->body.num_locals * sizeof(MVMRegister));
        MVM_fixed_size_free(tc, tc->instance->fsa, tc->cur_frame->allocd_work,
            tc->cur_frame->work);
        tc->cur_frame->work = new_work;
        tc->cur_frame->allocd_work = specialized->work_size;
        tc->cur_frame->args = tc->cur_frame->work + specialized->num_locals;

        /* Resize environment if needed. */
        if (specialized->env_size > tc->cur_frame->allocd_env) {
            MVMRegister *new_env = MVM_fixed_size_alloc_zeroed(tc, tc->instance->fsa,
                specialized->env_size);
            if (tc->cur_frame->allocd_env) {
                memcpy(new_env, tc->cur_frame->env, tc->cur_frame->allocd_env);
                MVM_fixed_size_free(tc, tc->instance->fsa, tc->cur_frame->allocd_env,
                    tc->cur_frame->env);
            }
            tc->cur_frame->env = new_env;
            tc->cur_frame->allocd_env = specialized->env_size;
        }
    }

    /* Sync frame with updates. */
    tc->cur_frame->effective_bytecode    = specialized->bytecode;
    tc->cur_frame->effective_handlers    = specialized->handlers;
    tc->cur_frame->effective_spesh_slots = specialized->spesh_slots;
    tc->cur_frame->spesh_log_slots       = NULL;
    tc->cur_frame->spesh_log_idx         = -1;

    /* Sync interpreter with updates. */
    jc = specialized->jitcode;
    if (jc && jc->num_osr_labels) {
        MVMint32 offset = specialized->deopts[osr_index * 2];
        MVMint32 i;
        *(tc->interp_bytecode_start)   = specialized->jitcode->bytecode;
        *(tc->interp_cur_op)           = specialized->jitcode->bytecode;
        for (i = 0; i < jc->num_osr_labels; i++) {
            if (jc->osr_offsets[i] == offset) {
                tc->cur_frame->jit_entry_label = jc->osr_labels[i];
                break;
            }
        }
        if (i == jc->num_osr_labels)
            MVM_exception_throw_adhoc(tc, "JIT: Could not find OSR label");
    } else {
        *(tc->interp_bytecode_start) = specialized->bytecode;
        *(tc->interp_cur_op)         = specialized->bytecode +
            specialized->deopts[2 * osr_index + 1];
    }
    *(tc->interp_reg_base)       = tc->cur_frame->work;
}

