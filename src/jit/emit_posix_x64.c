/*
** This file has been pre-processed with DynASM.
** http://luajit.org/dynasm.html
** DynASM version 1.3.0, DynASM x64 version 1.3.0
** DO NOT EDIT! The original file is in "src/jit/emit_x64.dasc".
*/

#line 1 "src/jit/emit_x64.dasc"
#include "moar.h"
#include <dasm_proto.h>
#include <dasm_x86.h>
#include "emit.h"


//|.arch x64
#if DASM_VERSION != 10300
#error "Version mismatch between DynASM and included encoding engine"
#endif
#line 8 "src/jit/emit_x64.dasc"
//|.actionlist actions
static const unsigned char actions[1962] = {
  85,72,137,229,255,72,131,252,236,96,255,76,137,117,252,248,76,137,109,252,
  240,76,137,101,232,72,137,93,224,255,73,137,252,254,73,137,252,245,77,139,
  166,233,73,139,156,253,36,233,255,252,255,226,255,248,10,72,199,192,0,0,0,
  0,248,11,255,76,139,117,252,248,76,139,109,252,240,76,139,101,232,72,139,
  93,224,255,72,137,252,236,93,195,255,72,185,237,237,72,137,139,233,255,72,
  199,131,233,237,255,73,139,141,233,72,139,137,233,72,137,139,233,255,73,139,
  142,233,72,139,137,233,72,137,139,233,255,72,139,139,233,72,139,137,233,255,
  77,137,227,255,77,139,155,233,255,77,139,147,233,255,77,139,146,233,255,77,
  133,210,15,133,244,247,255,76,137,252,247,76,137,222,72,199,194,237,73,186,
  237,237,65,252,255,210,255,73,137,194,248,1,255,76,137,147,233,255,76,137,
  225,255,72,139,137,233,72,139,147,233,72,137,145,233,255,73,139,140,253,36,
  233,72,139,137,233,72,137,139,233,255,72,139,139,233,72,141,145,233,76,139,
  137,233,77,141,145,233,77,133,201,73,15,69,210,255,76,139,2,77,133,192,255,
  15,133,244,249,255,77,139,134,233,77,139,128,233,248,3,255,76,139,2,255,77,
  133,192,15,133,244,250,255,77,139,132,253,36,233,77,139,128,233,255,102,252,
  247,129,233,236,15,149,208,73,131,252,248,0,15,149,212,132,196,15,149,208,
  102,65,252,247,128,233,236,15,148,212,132,196,15,132,244,249,72,137,85,216,
  76,137,69,208,76,137,252,247,72,139,179,233,73,186,237,237,65,252,255,210,
  76,139,69,208,72,139,85,216,248,3,255,76,137,2,248,4,255,76,139,2,77,133,
  192,15,133,244,250,255,76,137,252,247,73,139,180,253,36,233,72,139,182,233,
  73,186,237,237,65,252,255,210,73,137,192,255,102,252,247,129,233,236,15,149,
  208,73,131,252,248,0,15,149,212,132,196,15,149,208,102,65,252,247,128,233,
  236,15,148,212,132,196,15,132,244,249,72,137,85,216,76,137,69,208,76,137,
  252,247,72,139,179,233,73,186,237,237,65,252,255,210,76,139,69,208,72,139,
  85,216,248,3,76,137,2,255,76,137,131,233,255,72,139,139,233,72,139,147,233,
  76,141,129,233,73,131,184,233,0,15,132,244,247,77,139,128,233,248,1,255,102,
  252,247,129,233,236,15,149,208,72,131,252,250,0,15,149,212,132,196,15,149,
  208,102,252,247,130,233,236,15,148,212,132,196,15,132,244,248,72,137,85,216,
  76,137,69,208,76,137,252,247,72,139,179,233,73,186,237,237,65,252,255,210,
  76,139,69,208,72,139,85,216,248,2,255,73,137,144,233,255,72,139,139,233,72,
  137,139,233,255,72,139,139,233,73,137,142,233,255,73,139,142,233,72,137,139,
  233,73,199,134,233,237,255,73,139,141,233,255,72,199,131,233,0,0,0,0,255,
  72,139,139,233,72,133,201,15,148,210,72,15,182,210,72,137,147,233,255,72,
  139,131,233,255,72,3,131,233,255,72,43,131,233,255,72,15,175,131,233,255,
  72,153,72,252,247,187,233,255,72,137,131,233,255,72,252,255,131,233,255,72,
  252,255,139,233,255,252,242,15,16,131,233,255,252,242,15,88,131,233,255,252,
  242,15,92,131,233,255,252,242,15,89,131,233,255,252,242,15,94,131,233,255,
  252,242,15,17,131,233,255,252,242,72,15,42,131,233,252,242,15,17,131,233,
  255,252,242,72,15,44,131,233,72,137,131,233,255,72,59,131,233,255,15,148,
  208,255,15,149,208,255,15,156,208,255,15,158,208,255,15,159,208,255,15,157,
  208,255,72,15,182,192,72,137,131,233,255,72,199,193,0,0,0,0,255,72,199,193,
  1,0,0,0,255,252,242,15,16,131,233,102,15,46,131,233,255,15,147,209,255,15,
  155,210,72,15,68,202,255,15,154,210,72,15,68,202,255,15,151,209,255,72,15,
  182,201,72,137,139,233,255,72,139,139,233,72,133,201,15,132,244,247,72,139,
  137,233,72,139,137,233,72,129,185,233,239,15,133,244,247,72,199,131,233,1,
  0,0,0,252,233,244,248,248,1,72,199,131,233,0,0,0,0,248,2,255,72,139,139,233,
  72,133,201,15,149,210,77,139,134,233,77,139,128,233,76,57,193,65,15,149,208,
  68,32,194,72,15,182,210,72,137,147,233,255,72,139,139,233,72,133,201,15,148,
  210,77,139,134,233,77,139,128,233,76,57,193,65,15,148,208,68,8,194,72,15,
  182,210,72,137,147,233,255,76,137,252,247,72,199,198,237,73,186,237,237,65,
  252,255,210,73,139,140,253,36,233,72,139,137,233,72,137,136,233,102,199,128,
  233,236,65,139,142,233,137,136,233,72,137,131,233,255,76,139,147,233,77,133,
  210,255,15,132,244,247,102,65,252,247,130,233,236,255,15,133,244,247,77,139,
  154,233,77,139,155,233,77,133,219,255,15,132,244,247,76,137,252,247,76,137,
  214,72,141,147,233,77,139,147,233,65,252,255,210,252,233,244,248,248,1,255,
  76,137,147,233,248,2,255,73,139,140,253,36,233,198,129,233,1,255,73,139,140,
  253,36,233,72,139,137,233,72,139,147,233,72,139,146,233,72,57,209,15,133,
  244,247,77,139,132,253,36,233,77,139,128,233,76,137,131,233,252,233,244,248,
  248,1,76,137,252,247,72,139,179,233,73,139,149,233,72,139,146,233,72,199,
  193,237,76,141,155,233,77,137,216,73,186,237,237,65,252,255,210,72,133,192,
  15,132,244,248,255,72,199,192,1,0,0,0,72,141,13,244,248,73,137,140,253,36,
  233,252,233,244,11,248,2,255,72,139,139,233,72,133,201,15,132,244,247,102,
  252,247,129,233,236,15,133,244,247,72,199,131,233,1,0,0,0,252,233,244,248,
  248,1,72,199,131,233,0,0,0,0,248,2,255,77,137,252,243,255,77,137,252,235,
  255,77,141,156,253,36,233,255,77,139,156,253,36,233,255,76,139,155,233,255,
  76,141,155,233,255,77,139,157,233,77,139,155,233,255,73,199,195,237,255,73,
  187,237,237,255,76,137,223,255,76,137,222,255,76,137,218,255,76,137,217,255,
  77,137,216,255,77,137,217,255,102,73,15,110,195,255,102,73,15,110,203,255,
  102,73,15,110,211,255,102,73,15,110,219,255,102,73,15,110,227,255,102,73,
  15,110,252,235,255,68,136,156,253,36,233,255,102,68,137,156,253,36,233,255,
  76,137,156,253,36,233,255,72,139,8,72,137,139,233,255,72,139,139,233,72,137,
  8,255,73,131,190,233,0,15,132,244,247,76,137,252,247,73,186,237,237,65,252,
  255,210,248,1,255,252,233,244,10,255,252,233,245,255,72,139,131,233,72,133,
  192,15,133,245,255,72,139,131,233,72,133,192,15,132,245,255,72,139,139,233,
  72,133,201,15,132,244,247,73,139,150,233,72,139,146,233,72,57,209,15,132,
  244,247,252,233,245,248,1,255,76,137,252,247,72,139,179,233,72,139,147,233,
  73,139,141,233,72,139,137,233,73,186,237,237,65,252,255,210,72,131,252,248,
  0,15,140,245,255,72,139,139,233,73,139,148,253,36,233,72,139,146,233,255,
  72,131,252,249,0,15,132,244,247,255,102,252,247,129,233,236,255,72,59,145,
  233,15,133,244,247,255,102,252,247,129,233,236,15,133,244,247,255,76,137,
  252,247,72,199,198,237,72,199,194,237,73,186,237,237,65,252,255,210,255,72,
  199,192,237,252,233,244,11,248,2,255,76,137,252,247,76,137,252,238,72,199,
  194,237,73,186,237,237,65,252,255,210,73,137,195,255,77,139,148,253,36,233,
  255,76,139,139,233,77,137,138,233,255,73,185,237,237,77,137,138,233,255,77,
  139,141,233,77,139,137,233,77,137,138,233,255,65,199,132,253,36,233,237,255,
  73,199,132,253,36,233,237,255,72,141,147,233,73,137,148,253,36,233,255,73,
  139,150,233,72,139,18,73,137,148,253,36,233,255,72,141,21,245,73,137,148,
  253,36,233,255,76,137,85,216,76,137,93,208,255,76,137,252,247,72,139,179,
  233,72,141,85,208,76,137,209,73,186,237,237,65,252,255,210,255,76,139,93,
  208,76,139,85,216,255,76,137,252,247,72,137,198,76,137,218,76,137,209,255,
  76,139,144,233,77,139,146,233,65,252,255,210,255,76,137,252,247,72,139,179,
  233,76,137,218,72,199,193,237,73,186,237,237,65,252,255,210,255,72,199,192,
  1,0,0,0,252,233,244,11,255,72,139,139,233,72,131,252,249,0,15,140,244,248,
  72,129,252,249,239,15,141,244,248,72,107,201,8,72,141,21,244,247,72,1,202,
  252,255,226,250,7,248,1,255,249,252,233,245,250,7,255,77,59,166,233,15,132,
  244,247,72,141,13,244,247,73,137,140,253,36,233,72,199,192,1,0,0,0,252,233,
  244,11,248,1,255,205,3,255
};

#line 9 "src/jit/emit_x64.dasc"
//|.section code
#define DASM_SECTION_CODE	0
#define DASM_MAXSECTION		1
#line 10 "src/jit/emit_x64.dasc"
//|.globals MVM_JIT_LABEL_
enum {
  MVM_JIT_LABEL_exit,
  MVM_JIT_LABEL_out,
  MVM_JIT_LABEL__MAX
};
#line 11 "src/jit/emit_x64.dasc"

/* type declarations */
//|.type REGISTER, MVMRegister
#define Dt1(_V) (int)(ptrdiff_t)&(((MVMRegister *)0)_V)
#line 14 "src/jit/emit_x64.dasc"
//|.type ARGCTX, MVMArgProcContext
#define Dt2(_V) (int)(ptrdiff_t)&(((MVMArgProcContext *)0)_V)
#line 15 "src/jit/emit_x64.dasc"
//|.type STATICFRAME, MVMStaticFrame
#define Dt3(_V) (int)(ptrdiff_t)&(((MVMStaticFrame *)0)_V)
#line 16 "src/jit/emit_x64.dasc"
//|.type P6OPAQUE, MVMP6opaque
#define Dt4(_V) (int)(ptrdiff_t)&(((MVMP6opaque *)0)_V)
#line 17 "src/jit/emit_x64.dasc"
//|.type P6OBODY, MVMP6opaqueBody
#define Dt5(_V) (int)(ptrdiff_t)&(((MVMP6opaqueBody *)0)_V)
#line 18 "src/jit/emit_x64.dasc"
//|.type MVMINSTANCE, MVMInstance
#define Dt6(_V) (int)(ptrdiff_t)&(((MVMInstance *)0)_V)
#line 19 "src/jit/emit_x64.dasc"
//|.type OBJECT, MVMObject
#define Dt7(_V) (int)(ptrdiff_t)&(((MVMObject *)0)_V)
#line 20 "src/jit/emit_x64.dasc"
//|.type COLLECTABLE, MVMCollectable
#define Dt8(_V) (int)(ptrdiff_t)&(((MVMCollectable *)0)_V)
#line 21 "src/jit/emit_x64.dasc"
//|.type STABLE, MVMSTable
#define Dt9(_V) (int)(ptrdiff_t)&(((MVMSTable *)0)_V)
#line 22 "src/jit/emit_x64.dasc"
//|.type REPR, MVMREPROps
#define DtA(_V) (int)(ptrdiff_t)&(((MVMREPROps *)0)_V)
#line 23 "src/jit/emit_x64.dasc"
//|.type STRING, MVMString*
#define DtB(_V) (int)(ptrdiff_t)&(((MVMString* *)0)_V)
#line 24 "src/jit/emit_x64.dasc"
//|.type OBJECTPTR, MVMObject*
#define DtC(_V) (int)(ptrdiff_t)&(((MVMObject* *)0)_V)
#line 25 "src/jit/emit_x64.dasc"
//|.type CONTAINERSPEC, MVMContainerSpec
#define DtD(_V) (int)(ptrdiff_t)&(((MVMContainerSpec *)0)_V)
#line 26 "src/jit/emit_x64.dasc"
//|.type HLLCONFIG, MVMHLLConfig;
#define DtE(_V) (int)(ptrdiff_t)&(((MVMHLLConfig *)0)_V)
#line 27 "src/jit/emit_x64.dasc"
//|.type U8, MVMuint8
#define DtF(_V) (int)(ptrdiff_t)&(((MVMuint8 *)0)_V)
#line 28 "src/jit/emit_x64.dasc"
//|.type U16, MVMuint16
#define Dt10(_V) (int)(ptrdiff_t)&(((MVMuint16 *)0)_V)
#line 29 "src/jit/emit_x64.dasc"
//|.type U32, MVMuint32
#define Dt11(_V) (int)(ptrdiff_t)&(((MVMuint32 *)0)_V)
#line 30 "src/jit/emit_x64.dasc"
//|.type U64, MVMuint64
#define Dt12(_V) (int)(ptrdiff_t)&(((MVMuint64 *)0)_V)
#line 31 "src/jit/emit_x64.dasc"



/* Static allocation of relevant types to registers. I pick
 * callee-save registers for efficiency. It is likely we'll be calling
 * quite a C functions, and this saves us the trouble of storing
 * them. Moreover, C compilers preferentially do not use callee-saved
 * registers, and so in most cases, these won't be touched at all. */
//|.type TC, MVMThreadContext, r14
#define Dt13(_V) (int)(ptrdiff_t)&(((MVMThreadContext *)0)_V)
#line 40 "src/jit/emit_x64.dasc"
/* Alternative base pointer. I'll be using this often, so picking rbx
 * here rather than the extended registers will lead to smaller
 * bytecode */
//|.type WORK, MVMRegister, rbx
#define Dt14(_V) (int)(ptrdiff_t)&(((MVMRegister *)0)_V)
#line 44 "src/jit/emit_x64.dasc"
//|.type FRAME, MVMFrame, r12
#define Dt15(_V) (int)(ptrdiff_t)&(((MVMFrame *)0)_V)
#line 45 "src/jit/emit_x64.dasc"
//|.type CU, MVMCompUnit, r13
#define Dt16(_V) (int)(ptrdiff_t)&(((MVMCompUnit *)0)_V)
#line 46 "src/jit/emit_x64.dasc"




const MVMint32 MVM_jit_support(void) {
    return 1;
}

const unsigned char * MVM_jit_actions(void) {
    return actions;
}

const unsigned int MVM_jit_num_globals(void) {
    return MVM_JIT_LABEL__MAX;
}


/* C Call argument registers */
//|.if WIN32
//|.define ARG1, rcx
//|.define ARG2, rdx
//|.define ARG3, r8
//|.define ARG4, r9
//|.else
//|.define ARG1, rdi
//|.define ARG2, rsi
//|.define ARG3, rdx
//|.define ARG4, rcx
//|.define ARG5, r8
//|.define ARG6, r9
//|.endif

/* C call argument registers for floating point */
//|.if WIN32
//|.define ARG1F, xmm0
//|.define ARG2F, xmm1
//|.define ARG3F, xmm2
//|.define ARG4F, xmm3
//|.else
//|.define ARG1F, xmm0
//|.define ARG2F, xmm1
//|.define ARG3F, xmm2
//|.define ARG4F, xmm3
//|.define ARG5F, xmm4
//|.define ARG6F, xmm5
//|.define ARG7F, xmm6
//|.define ARG8F, xmm7
//|.endif

/* Special register for the function to be invoked
 * (chosen because it isn't involved in argument passing
 *  and volatile) */
//|.define FUNCTION, r10
/* all-purpose temporary registers */
//|.define TMP1, rcx
//|.define TMP2, rdx
//|.define TMP3, r8
//|.define TMP4, r9
//|.define TMP5, r10
//|.define TMP6, r11
/* same, but 32 bits wide */
//|.define TMP1d, ecx
//|.define TMP2d, edx
//|.define TMP3d, r8d
//|.define TMP4d, r9d
//|.define TMP5d, r10d
//|.define TMP6d, r11d
/* and 16 bits wide */
//|.define TMP1w, cx
//|.define TMP2w, dx
//|.define TMP3w, r8w
//|.define TMP4w, r9w
//|.define TMP5w, r10w
//|.define TMP6w, r11w
/* and 8 bits for good measure */
//|.define TMP1b, cl
//|.define TMP2b, dl
//|.define TMP3b, r8b
//|.define TMP4b, r9b
//|.define TMP5b, r10b
//|.define TMP6b, r11b


/* return value */
//|.define RV, rax
//|.define RVF, xmm0


//|.macro callp, funcptr
//| mov64 FUNCTION, (uintptr_t)funcptr
//| call FUNCTION
//|.endmacro


//|.macro check_wb, root, ref;
//| test word COLLECTABLE:root->flags, MVM_CF_SECOND_GEN;
//| setnz al;
//| cmp ref, 0x0;
//| setne ah;
//| test ah, al;
//| setnz al;
//| test word COLLECTABLE:ref->flags, MVM_CF_SECOND_GEN;
//| setz ah;
//| test ah, al;
//|.endmacro;

//|.macro hit_wb, obj
//| mov ARG1, TC;
//| mov ARG2, obj;
//| callp &MVM_gc_write_barrier_hit;
//|.endmacro

//|.macro get_spesh_slot, reg, idx;
//| mov reg, FRAME->effective_spesh_slots;
//| mov reg, OBJECTPTR:reg[idx];
//|.endmacro


//|.macro get_vmnull, reg
//| mov reg, TC->instance;
//| mov reg, MVMINSTANCE:reg->VMNull;
//|.endmacro

//|.macro get_cur_op, reg
//| mov reg, TC->interp_cur_op
//| mov reg, [reg]
//|.endmacro

//|.macro get_string, reg, idx
//| mov reg, CU->body.strings;
//| mov reg, STRING:reg[idx];
//|.endmacro

//|.macro is_type_object, reg
//| test word OBJECT:reg->header.flags, MVM_CF_TYPE_OBJECT
//|.endmacro

//|.macro gc_sync_point
//| cmp qword TC->gc_status, 0;
//| je >1;
//| mov ARG1, TC;
//| callp &MVM_gc_enter_from_interrupt;
//|1:
//|.endmacro

/* A function prologue is always the same in x86 / x64, becuase
 * we do not provide variable arguments, instead arguments are provided
 * via a frame. All JIT entry points receive a prologue. */
void MVM_jit_emit_prologue(MVMThreadContext *tc, MVMJitGraph *jg,
                           dasm_State **Dst) {
    /* Setup stack */
    //| push rbp; // nb, this aligns the stack to 16 bytes again
    //| mov rbp, rsp;
    dasm_put(Dst, 0);
#line 199 "src/jit/emit_x64.dasc"
    /* allocate stack space for 4 callee-save registers,
       4 stack parameters, and 4 parameter registers (windows only) */
    //| sub rsp, 0x60;
    dasm_put(Dst, 5);
#line 202 "src/jit/emit_x64.dasc"
    /* save callee-save registers */
    //| mov [rbp-0x8],  TC;
    //| mov [rbp-0x10], CU;
    //| mov [rbp-0x18], FRAME;
    //| mov [rbp-0x20], WORK;
    dasm_put(Dst, 11);
#line 207 "src/jit/emit_x64.dasc"
    /* setup special frame variables */
    //| mov TC,   ARG1;
    //| mov CU,   ARG2;
    //| mov FRAME, TC->cur_frame;
    //| mov WORK, FRAME->work;
    dasm_put(Dst, 30, Dt13(->cur_frame), Dt15(->work));
#line 212 "src/jit/emit_x64.dasc"
    /* ARG3 contains our 'entry label' */
    //| jmp ARG3
    dasm_put(Dst, 49);
#line 214 "src/jit/emit_x64.dasc"
}

/* And a function epilogue is also always the same */
void MVM_jit_emit_epilogue(MVMThreadContext *tc, MVMJitGraph *jg,
                           dasm_State **Dst) {
    //| ->exit:
    //| mov RV, 0;
    //| ->out:
    dasm_put(Dst, 53);
#line 222 "src/jit/emit_x64.dasc"
    /* restore callee-save registers */
    //| mov TC, [rbp-0x8];
    //| mov CU, [rbp-0x10];
    //| mov FRAME, [rbp-0x18];
    //| mov WORK, [rbp-0x20];
    dasm_put(Dst, 65);
#line 227 "src/jit/emit_x64.dasc"
    /* Restore stack */
    //| mov rsp, rbp;
    //| pop rbp;
    //| ret;
    dasm_put(Dst, 84);
#line 231 "src/jit/emit_x64.dasc"
}

static MVMuint64 try_emit_gen2_ref(MVMThreadContext *tc, MVMJitGraph *jg,
                                   MVMObject *obj, MVMint16 reg,
                                   dasm_State **Dst) {
    if (!(obj->header.flags & MVM_CF_SECOND_GEN))
        return 0;
    //| mov64 TMP1, (uintptr_t)obj;
    //| mov WORK[reg], TMP1;
    dasm_put(Dst, 91, (unsigned int)((uintptr_t)obj), (unsigned int)(((uintptr_t)obj)>>32), Dt14([reg]));
#line 240 "src/jit/emit_x64.dasc"
    return 1;
}

/* compile per instruction, can't really do any better yet */
void MVM_jit_emit_primitive(MVMThreadContext *tc, MVMJitGraph *jg,
                            MVMJitPrimitive * prim, dasm_State **Dst) {
    MVMSpeshIns *ins = prim->ins;
    MVMuint16 op = ins->info->opcode;
    MVM_jit_log(tc, "emit opcode: <%s>\n", ins->info->name);
    /* Quite a few of these opcodes are copies. Ultimately, I want to
     * move copies to their own node (MVMJitCopy or such), and reduce
     * the number of copies (and thereby increase the efficiency), but
     * currently that isn't really feasible. */
    switch (op) {
    case MVM_OP_const_i64_16:
    case MVM_OP_const_i64_32: {
        MVMint32 reg = ins->operands[0].reg.orig;
        /* Upgrade to 64 bit */
        MVMint64 val = (op == MVM_OP_const_i64_16 ? (MVMint64)ins->operands[1].lit_i16 :
                        (MVMint64)ins->operands[1].lit_i32);
        //| mov qword WORK[reg], val;
        dasm_put(Dst, 100, Dt14([reg]), val);
#line 261 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_const_i64: {
        MVMint32 reg = ins->operands[0].reg.orig;
        MVMint64 val = ins->operands[1].lit_i64;
        //| mov64 TMP1, val;
        //| mov WORK[reg], TMP1;
        dasm_put(Dst, 91, (unsigned int)(val), (unsigned int)((val)>>32), Dt14([reg]));
#line 268 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_const_n64: {
        MVMint16 reg = ins->operands[0].reg.orig;
        MVMint64 valbytes = ins->operands[1].lit_i64;
        MVM_jit_log(tc, "store const %f\n", ins->operands[1].lit_n64);
        //| mov64 TMP1, valbytes;
        //| mov WORK[reg], TMP1;
        dasm_put(Dst, 91, (unsigned int)(valbytes), (unsigned int)((valbytes)>>32), Dt14([reg]));
#line 276 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_const_s: {
         MVMint16 reg = ins->operands[0].reg.orig;
         MVMuint32 idx = ins->operands[1].lit_str_idx;
         MVMStaticFrame *sf = jg->sg->sf;
         MVMString * s = sf->body.cu->body.strings[idx];
         if (!try_emit_gen2_ref(tc, jg, (MVMObject*)s, reg, Dst)) {
             //| get_string TMP1, idx;
             //| mov WORK[reg], TMP1;
             dasm_put(Dst, 106, Dt16(->body.strings), DtB([idx]), Dt14([reg]));
#line 286 "src/jit/emit_x64.dasc"
         }
         break;
    }
    case MVM_OP_null: {
        MVMint16 reg = ins->operands[0].reg.orig;
        //| get_vmnull TMP1;
        //| mov WORK[reg], TMP1;
        dasm_put(Dst, 119, Dt13(->instance), Dt6(->VMNull), Dt14([reg]));
#line 293 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_gethow:
    case MVM_OP_getwhat:
    case MVM_OP_getwho: {
        MVMint16 dst = ins->operands[0].reg.orig;
        MVMint16 obj = ins->operands[1].reg.orig;
        //| mov TMP1, WORK[obj];
        //| mov TMP1, OBJECT:TMP1->st;
        dasm_put(Dst, 132, Dt14([obj]), Dt7(->st));
#line 302 "src/jit/emit_x64.dasc"
        if (op == MVM_OP_gethow) {
            //| mov TMP1, STABLE:TMP1->HOW;
            dasm_put(Dst, 136, Dt9(->HOW));
#line 304 "src/jit/emit_x64.dasc"
        } else if (op == MVM_OP_getwho) {
            //| mov TMP1, STABLE:TMP1->WHO;
            dasm_put(Dst, 136, Dt9(->WHO));
#line 306 "src/jit/emit_x64.dasc"
        } else {
            //| mov TMP1, STABLE:TMP1->WHAT;
            dasm_put(Dst, 136, Dt9(->WHAT));
#line 308 "src/jit/emit_x64.dasc"
        }
        //| mov WORK[dst], TMP1;
        dasm_put(Dst, 95, Dt14([dst]));
#line 310 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_getlex: {
        MVMint16 *lexical_types;
        MVMStaticFrame * sf = jg->sg->sf;
        MVMint16 dst = ins->operands[0].reg.orig;
        MVMint16 idx = ins->operands[1].lex.idx;
        MVMint16 out = ins->operands[1].lex.outers;
        MVMint16 i;
        //| mov TMP6, FRAME;
        dasm_put(Dst, 141);
#line 320 "src/jit/emit_x64.dasc"
        for (i = 0; i < out; i++) {
            /* I'm going to skip compiling the check whether the outer
             * node really exists, because if the code has run N times
             * correctly, then the outer frame must have existed then,
             * and since this chain is static, it should still exist
             * now.  If it doesn't exist, that means we crash.
             *
             * NB: inlining /might/ make this all wrong! But, if that
             * happens, the interpreter will panic even without JIT */
            //| mov TMP6, FRAME:TMP6->outer;
            dasm_put(Dst, 145, Dt15(->outer));
#line 330 "src/jit/emit_x64.dasc"
            sf = sf->body.outer;
        }
        /* get array of lexicals */
        //| mov TMP5, FRAME:TMP6->env;
        dasm_put(Dst, 150, Dt15(->env));
#line 334 "src/jit/emit_x64.dasc"
        /* read value */
        //| mov TMP5, REGISTER:TMP5[idx];
        dasm_put(Dst, 155, Dt1([idx]));
#line 336 "src/jit/emit_x64.dasc"
        /* it seems that if at runtime, if the outer frame has been inlined,
         * this /could/ be wrong. But if that is so, the interpreted instruction
         * would also be wrong, because it'd refer to the wrong lexical. */
        lexical_types = (!out && jg->sg->lexical_types ?
                         jg->sg->lexical_types :
                         sf->body.lexical_types);
        MVM_jit_log(tc, "Lexical type of register: %d\n", lexical_types[idx]);
        if (lexical_types[idx] == MVM_reg_obj) {
            MVM_jit_log(tc, "Emit lex vifivy check\n");
            /* if it is zero, check if we need to auto-vivify */
            //| test TMP5, TMP5;
            //| jnz >1;
            dasm_put(Dst, 160);
#line 348 "src/jit/emit_x64.dasc"
            /* setup args */
            //| mov ARG1, TC;
            //| mov ARG2, TMP6;
            //| mov ARG3, idx;
            //| callp &MVM_frame_vivify_lexical;
            dasm_put(Dst, 168, idx, (unsigned int)((uintptr_t)&MVM_frame_vivify_lexical), (unsigned int)(((uintptr_t)&MVM_frame_vivify_lexical)>>32));
#line 353 "src/jit/emit_x64.dasc"
            /* use return value for the result */
            //| mov TMP5, RV;
            //|1:
            dasm_put(Dst, 188);
#line 356 "src/jit/emit_x64.dasc"
        }
        /* store the value */
        //| mov WORK[dst], TMP5;
        dasm_put(Dst, 194, Dt14([dst]));
#line 359 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_bindlex: {
        MVMint16 idx = ins->operands[0].lex.idx;
        MVMint16 out = ins->operands[0].lex.outers;
        MVMint16 src = ins->operands[1].reg.orig;
        MVMint16 i;
        //| mov TMP1, FRAME;
        dasm_put(Dst, 199);
#line 367 "src/jit/emit_x64.dasc"
        for (i = 0; i < out; i++) {
            //| mov TMP1, FRAME:TMP1->outer;
            dasm_put(Dst, 136, Dt15(->outer));
#line 369 "src/jit/emit_x64.dasc"
        }
        //| mov TMP1, FRAME:TMP1->env;
        //| mov TMP2, WORK[src];
        //| mov REGISTER:TMP1[idx], TMP2;
        dasm_put(Dst, 203, Dt15(->env), Dt14([src]), Dt1([idx]));
#line 373 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_sp_getarg_o:
    case MVM_OP_sp_getarg_n:
    case MVM_OP_sp_getarg_s:
    case MVM_OP_sp_getarg_i: {
        MVMint32 reg = ins->operands[0].reg.orig;
        MVMuint16 idx = ins->operands[1].callsite_idx;
        //| mov TMP1, FRAME->params.args;
        //| mov TMP1, REGISTER:TMP1[idx];
        //| mov WORK[reg], TMP1;
        dasm_put(Dst, 216, Dt15(->params.args), Dt1([idx]), Dt14([reg]));
#line 384 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_sp_p6oget_i:
    case MVM_OP_sp_p6oget_n:
    case MVM_OP_sp_p6oget_s:
    case MVM_OP_sp_p6oget_o:
    case MVM_OP_sp_p6ogetvc_o:
    case MVM_OP_sp_p6ogetvt_o: {
        MVMint16 dst    = ins->operands[0].reg.orig;
        MVMint16 obj    = ins->operands[1].reg.orig;
        MVMint16 offset = ins->operands[2].lit_i16;
        MVMint16 body   = offsetof(MVMP6opaque, body);
        /* load address and object */
        //| mov TMP1, WORK[obj];
        //| lea TMP2, [TMP1 + (offset + body)];
        //| mov TMP4, P6OPAQUE:TMP1->body.replaced;
        //| lea TMP5, [TMP4 + offset];
        //| test TMP4, TMP4;
        //| cmovnz TMP2, TMP5;
        dasm_put(Dst, 231, Dt14([obj]), (offset + body), Dt4(->body.replaced), offset);
#line 403 "src/jit/emit_x64.dasc"
        /* TMP2 now contains address of item */
        if (op == MVM_OP_sp_p6oget_o) {
            //| mov TMP3, [TMP2];
            //| test TMP3, TMP3;
            dasm_put(Dst, 255);
#line 407 "src/jit/emit_x64.dasc"
            /* Check if object doesn't point to NULL */
            //| jnz >3;
            dasm_put(Dst, 262);
#line 409 "src/jit/emit_x64.dasc"
            /* Otherwise load VMNull */
            //| get_vmnull TMP3;
            //|3:
            dasm_put(Dst, 267, Dt13(->instance), Dt6(->VMNull));
#line 412 "src/jit/emit_x64.dasc"
        } else if (op == MVM_OP_sp_p6ogetvt_o) {
            /* vivify as type object */
            MVMint16 spesh_idx = ins->operands[3].lit_i16;
            //| mov TMP3, [TMP2];
            dasm_put(Dst, 278);
#line 416 "src/jit/emit_x64.dasc"
            /* check for null */
            //| test TMP3, TMP3;
            //| jnz >4;
            dasm_put(Dst, 282);
#line 419 "src/jit/emit_x64.dasc"
            /* if null, vivify as type object from spesh slot */
            //| get_spesh_slot TMP3, spesh_idx;
            dasm_put(Dst, 290, Dt15(->effective_spesh_slots), DtC([spesh_idx]));
#line 421 "src/jit/emit_x64.dasc"
            /* need to hit write barrier? */
            //| check_wb TMP1, TMP3;
            //| jz >3;
            //| mov qword [rbp-0x28], TMP2; // address
            //| mov qword [rbp-0x30], TMP3; // value
            //| hit_wb WORK[obj]; // write barrier for header
            //| mov TMP3, qword [rbp-0x30];
            //| mov TMP2, qword [rbp-0x28];
            //|3:
            dasm_put(Dst, 301, Dt8(->flags), MVM_CF_SECOND_GEN, Dt8(->flags), MVM_CF_SECOND_GEN, Dt14([obj]), (unsigned int)((uintptr_t)&MVM_gc_write_barrier_hit), (unsigned int)(((uintptr_t)&MVM_gc_write_barrier_hit)>>32));
#line 430 "src/jit/emit_x64.dasc"
            /* store vivified type value in memory location */
            //| mov [TMP2], TMP3;
            //|4:
            dasm_put(Dst, 374);
#line 433 "src/jit/emit_x64.dasc"
        } else if (op == MVM_OP_sp_p6ogetvc_o) {
            MVMint16 spesh_idx = ins->operands[3].lit_i16;
            //| mov TMP3, [TMP2];
            //| test TMP3, TMP3;
            //| jnz >4;
            dasm_put(Dst, 380);
#line 438 "src/jit/emit_x64.dasc"
            /* vivify as clone */
            //| mov ARG1, TC;
            //| get_spesh_slot ARG2, spesh_idx;
            //| callp &MVM_repr_clone;
            //| mov TMP3, RV;
            dasm_put(Dst, 391, Dt15(->effective_spesh_slots), DtC([spesh_idx]), (unsigned int)((uintptr_t)&MVM_repr_clone), (unsigned int)(((uintptr_t)&MVM_repr_clone)>>32));
#line 443 "src/jit/emit_x64.dasc"
            /* reload object and address */
            //| mov TMP1, WORK[obj];
            //| lea TMP2, [TMP1 + (offset + body)];
            //| mov TMP4, P6OPAQUE:TMP1->body.replaced;
            //| lea TMP5, [TMP4 + offset];
            //| test TMP4, TMP4;
            //| cmovnz TMP2, TMP5;
            dasm_put(Dst, 231, Dt14([obj]), (offset + body), Dt4(->body.replaced), offset);
#line 450 "src/jit/emit_x64.dasc"
            /* assign with write barrier */
            //| check_wb TMP1, TMP3;
            //| jz >3;
            //| mov qword [rbp-0x28], TMP2; // address
            //| mov qword [rbp-0x30], TMP3; // value
            //| hit_wb WORK[obj]; // write barrier for header
            //| mov TMP3, qword [rbp-0x30];
            //| mov TMP2, qword [rbp-0x28];
            //|3:
            //| mov [TMP2], TMP3;
            dasm_put(Dst, 417, Dt8(->flags), MVM_CF_SECOND_GEN, Dt8(->flags), MVM_CF_SECOND_GEN, Dt14([obj]), (unsigned int)((uintptr_t)&MVM_gc_write_barrier_hit), (unsigned int)(((uintptr_t)&MVM_gc_write_barrier_hit)>>32));
#line 460 "src/jit/emit_x64.dasc"
            /* done */
            //|4:
            dasm_put(Dst, 377);
#line 462 "src/jit/emit_x64.dasc"
        } else {
            /* the regular case */
            //| mov TMP3, [TMP2];
            dasm_put(Dst, 278);
#line 465 "src/jit/emit_x64.dasc"
        }
        /* store in local register */
        //| mov WORK[dst], TMP3;
        dasm_put(Dst, 493, Dt14([dst]));
#line 468 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_sp_p6obind_i:
    case MVM_OP_sp_p6obind_n:
    case MVM_OP_sp_p6obind_o:
    case MVM_OP_sp_p6obind_s: {
        MVMint16 obj    = ins->operands[0].reg.orig;
        MVMint16 offset = ins->operands[1].callsite_idx;
        MVMint16 val    = ins->operands[2].reg.orig;
        //| mov TMP1, WORK[obj];            // object
        //| mov TMP2, WORK[val];            // value
        //| lea TMP3, P6OPAQUE:TMP1->body;  // body
        //| cmp qword P6OBODY:TMP3->replaced, 0;
        //| je >1;
        //| mov TMP3, P6OBODY:TMP3->replaced; // replaced object body
        //|1:
        dasm_put(Dst, 498, Dt14([obj]), Dt14([val]), Dt4(->body), Dt5(->replaced), Dt5(->replaced));
#line 484 "src/jit/emit_x64.dasc"
        if (op == MVM_OP_sp_p6obind_o || op == MVM_OP_sp_p6obind_s) {
            /* check if we should hit write barrier */
            //| check_wb TMP1, TMP2;
            //| jz >2;
            //| mov qword [rbp-0x28], TMP2; // store value
            //| mov qword [rbp-0x30], TMP3; // store body pointer
            //| hit_wb WORK[obj];
            //| mov TMP3, qword [rbp-0x30]; // restore body pointer
            //| mov TMP2, qword [rbp-0x28]; // restore value
            //|2: // done
            dasm_put(Dst, 526, Dt8(->flags), MVM_CF_SECOND_GEN, Dt8(->flags), MVM_CF_SECOND_GEN, Dt14([obj]), (unsigned int)((uintptr_t)&MVM_gc_write_barrier_hit), (unsigned int)(((uintptr_t)&MVM_gc_write_barrier_hit)>>32));
#line 494 "src/jit/emit_x64.dasc"
        }
        //| mov [TMP3+offset], TMP2; // store value into body
        dasm_put(Dst, 598, offset);
#line 496 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_getwhere:
    case MVM_OP_set: {
         MVMint32 reg1 = ins->operands[0].reg.orig;
         MVMint32 reg2 = ins->operands[1].reg.orig;
         //| mov TMP1, WORK[reg2];
         //| mov WORK[reg1], TMP1;
         dasm_put(Dst, 603, Dt14([reg2]), Dt14([reg1]));
#line 504 "src/jit/emit_x64.dasc"
         break;
    }
    case MVM_OP_sp_getspeshslot: {
        MVMint16 dst = ins->operands[0].reg.orig;
        MVMint16 spesh_idx = ins->operands[1].lit_i16;
        //| get_spesh_slot TMP1, spesh_idx;
        //| mov WORK[dst], TMP1;
        dasm_put(Dst, 216, Dt15(->effective_spesh_slots), DtC([spesh_idx]), Dt14([dst]));
#line 511 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_setdispatcher: {
        MVMint16 src = ins->operands[0].reg.orig;
        //| mov TMP1, aword WORK[src];
        //| mov aword TC->cur_dispatcher, TMP1;
        dasm_put(Dst, 612, Dt14([src]), Dt13(->cur_dispatcher));
#line 517 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_takedispatcher: {
        MVMint16 dst = ins->operands[0].reg.orig;
        //| mov TMP1, aword TC->cur_dispatcher;
        //| mov aword WORK[dst], TMP1;
        //| mov aword TC->cur_dispatcher, NULL;
        dasm_put(Dst, 621, Dt13(->cur_dispatcher), Dt14([dst]), Dt13(->cur_dispatcher), NULL);
#line 524 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_getcode: {
        MVMint16 dst = ins->operands[0].reg.orig;
        MVMuint16 idx = ins->operands[1].coderef_idx;
        //| mov TMP1, aword CU->body.coderefs;
        //| mov TMP1, aword OBJECTPTR:TMP1[idx];
        //| mov aword WORK[dst], TMP1;
        dasm_put(Dst, 106, Dt16(->body.coderefs), DtC([idx]), Dt14([dst]));
#line 532 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_hllboxtype_n:
    case MVM_OP_hllboxtype_s:
    case MVM_OP_hllboxtype_i: {
        MVMint16 dst = ins->operands[0].reg.orig;
        //| mov TMP1, CU->body.hll_config;
        dasm_put(Dst, 635, Dt16(->body.hll_config));
#line 539 "src/jit/emit_x64.dasc"
        if (op == MVM_OP_hllboxtype_n) {
            //| mov TMP1, aword HLLCONFIG:TMP1->num_box_type;
            dasm_put(Dst, 136, DtE(->num_box_type));
#line 541 "src/jit/emit_x64.dasc"
        } else if (op == MVM_OP_hllboxtype_s) {
            //| mov TMP1, aword HLLCONFIG:TMP1->str_box_type;
            dasm_put(Dst, 136, DtE(->str_box_type));
#line 543 "src/jit/emit_x64.dasc"
        } else {
            //| mov TMP1, aword HLLCONFIG:TMP1->int_box_type;
            dasm_put(Dst, 136, DtE(->int_box_type));
#line 545 "src/jit/emit_x64.dasc"
        }
        //| mov aword WORK[dst], TMP1;
        dasm_put(Dst, 95, Dt14([dst]));
#line 547 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_null_s: {
        MVMint16 dst = ins->operands[0].reg.orig;
        //| mov qword WORK[dst], 0;
        dasm_put(Dst, 640, Dt14([dst]));
#line 552 "src/jit/emit_x64.dasc"
        break;
     }
    case MVM_OP_isnull_s: {
        MVMint16 dst = ins->operands[0].reg.orig;
        MVMint16 src = ins->operands[1].reg.orig;
        //| mov TMP1, WORK[src];
        //| test TMP1, TMP1;
        //| setz TMP2b;
        //| movzx TMP2, TMP2b;
        //| mov qword WORK[dst], TMP2;
        dasm_put(Dst, 649, Dt14([src]), Dt14([dst]));
#line 562 "src/jit/emit_x64.dasc"
        break;
    }

    case MVM_OP_add_i:
    case MVM_OP_sub_i:
    case MVM_OP_mul_i:
    case MVM_OP_div_i:
    case MVM_OP_mod_i: {
        MVMint32 reg_a = ins->operands[0].reg.orig;
        MVMint32 reg_b = ins->operands[1].reg.orig;
        MVMint32 reg_c = ins->operands[2].reg.orig;
        //| mov rax, WORK[reg_b];
        dasm_put(Dst, 668, Dt14([reg_b]));
#line 574 "src/jit/emit_x64.dasc"
        switch(ins->info->opcode) {
        case MVM_OP_add_i:
            //| add rax, WORK[reg_c];
            dasm_put(Dst, 673, Dt14([reg_c]));
#line 577 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_sub_i:
            //| sub rax, WORK[reg_c];
            dasm_put(Dst, 678, Dt14([reg_c]));
#line 580 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_mul_i:
            //| imul rax, WORK[reg_c];
            dasm_put(Dst, 683, Dt14([reg_c]));
#line 583 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_div_i:
        case MVM_OP_mod_i:
            // Convert Quadword to Octoword, i.e. use rax:rdx as one
            // single 16 byte register
            //| cqo;
            //| idiv qword WORK[reg_c];
            dasm_put(Dst, 689, Dt14([reg_c]));
#line 590 "src/jit/emit_x64.dasc"
            break;
        }
        if (ins->info->opcode == MVM_OP_mod_i) {
            // result of modula is stored in rdx
            //| mov WORK[reg_a], rdx;
            dasm_put(Dst, 663, Dt14([reg_a]));
#line 595 "src/jit/emit_x64.dasc"
        } else {
            // all others in rax
            //| mov WORK[reg_a], rax;
            dasm_put(Dst, 697, Dt14([reg_a]));
#line 598 "src/jit/emit_x64.dasc"
        }
        break;
    }
    case MVM_OP_inc_i: {
         MVMint32 reg = ins->operands[0].reg.orig;
         //| inc qword WORK[reg];
         dasm_put(Dst, 702, Dt14([reg]));
#line 604 "src/jit/emit_x64.dasc"
         break;
    }
    case MVM_OP_dec_i: {
        MVMint32 reg = ins->operands[0].reg.orig;
        //| dec qword WORK[reg];
        dasm_put(Dst, 708, Dt14([reg]));
#line 609 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_add_n:
    case MVM_OP_sub_n:
    case MVM_OP_mul_n:
    case MVM_OP_div_n: {
        MVMint16 reg_a = ins->operands[0].reg.orig;
        MVMint16 reg_b = ins->operands[1].reg.orig;
        MVMint16 reg_c = ins->operands[2].reg.orig;
        /* Copying data to xmm (floating point) registers requires
         * a special move instruction */
        //| movsd xmm0, qword WORK[reg_b];
        dasm_put(Dst, 714, Dt14([reg_b]));
#line 621 "src/jit/emit_x64.dasc"
        switch(ins->info->opcode) {
        case MVM_OP_add_n:
            //| addsd xmm0, qword WORK[reg_c];
            dasm_put(Dst, 721, Dt14([reg_c]));
#line 624 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_sub_n:
            //| subsd xmm0, qword WORK[reg_c];
            dasm_put(Dst, 728, Dt14([reg_c]));
#line 627 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_mul_n:
            //| mulsd xmm0, qword WORK[reg_c];
            dasm_put(Dst, 735, Dt14([reg_c]));
#line 630 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_div_n:
            //| divsd xmm0, qword WORK[reg_c];
            dasm_put(Dst, 742, Dt14([reg_c]));
#line 633 "src/jit/emit_x64.dasc"
            break;
        }
        //| movsd qword WORK[reg_a], xmm0;
        dasm_put(Dst, 749, Dt14([reg_a]));
#line 636 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_coerce_in: {
        MVMint16 dst = ins->operands[0].reg.orig;
        MVMint16 src = ins->operands[1].reg.orig;
        /* convert simple integer to double precision */
        //| cvtsi2sd xmm0, qword WORK[src];
        //| movsd qword WORK[dst], xmm0;
        dasm_put(Dst, 756, Dt14([src]), Dt14([dst]));
#line 644 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_coerce_ni: {
        MVMint16 dst = ins->operands[0].reg.orig;
        MVMint16 src = ins->operands[1].reg.orig;
        /* convert double precision to simple intege */
        //| cvttsd2si rax, qword WORK[src];
        //| mov WORK[dst], rax;
        dasm_put(Dst, 770, Dt14([src]), Dt14([dst]));
#line 652 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_eq_i:
    case MVM_OP_eqaddr:
    case MVM_OP_ne_i:
    case MVM_OP_lt_i:
    case MVM_OP_le_i:
    case MVM_OP_gt_i:
    case MVM_OP_ge_i: {
        MVMint32 reg_a = ins->operands[0].reg.orig;
        MVMint32 reg_b = ins->operands[1].reg.orig;
        MVMint32 reg_c = ins->operands[2].reg.orig;
        //| mov rax, WORK[reg_b];
        dasm_put(Dst, 668, Dt14([reg_b]));
#line 665 "src/jit/emit_x64.dasc"
        /* comparison result in the setting bits in the rflags register */
        //| cmp rax, WORK[reg_c];
        dasm_put(Dst, 782, Dt14([reg_c]));
#line 667 "src/jit/emit_x64.dasc"
        /* copy the right comparison bit to the lower byte of the rax
           register */
        switch(ins->info->opcode) {
        case MVM_OP_eqaddr:
        case MVM_OP_eq_i:
            //| sete al;
            dasm_put(Dst, 787);
#line 673 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_ne_i:
            //| setne al;
            dasm_put(Dst, 791);
#line 676 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_lt_i:
            //| setl al;
            dasm_put(Dst, 795);
#line 679 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_le_i:
            //| setle al;
            dasm_put(Dst, 799);
#line 682 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_gt_i:
            //| setg al;
            dasm_put(Dst, 803);
#line 685 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_ge_i:
            //| setge al;
            dasm_put(Dst, 807);
#line 688 "src/jit/emit_x64.dasc"
            break;
        }
        /* zero extend al (lower byte) to rax (whole register) */
        //| movzx rax, al;
        //| mov WORK[reg_a], rax;
        dasm_put(Dst, 811, Dt14([reg_a]));
#line 693 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_not_i: {
        MVMint16 dst = ins->operands[0].reg.orig;
        MVMint16 src = ins->operands[1].reg.orig;
        //| mov TMP1, WORK[src];
        //| test TMP1, TMP1;
        //| setz TMP2b;
        //| movzx TMP2, TMP2b;
        //| mov WORK[dst], TMP2;
        dasm_put(Dst, 649, Dt14([src]), Dt14([dst]));
#line 703 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_eq_n:
    case MVM_OP_ne_n:
    case MVM_OP_le_n:
    case MVM_OP_lt_n:
    case MVM_OP_ge_n:
    case MVM_OP_gt_n: {
        MVMint16 dst = ins->operands[0].reg.orig;
        MVMint16 a   = ins->operands[1].reg.orig;
        MVMint16 b   = ins->operands[2].reg.orig;
        if (op == MVM_OP_eq_n) {
            //| mov TMP1, 0;
            dasm_put(Dst, 820);
#line 716 "src/jit/emit_x64.dasc"
        } else if (op == MVM_OP_ne_n) {
            //| mov TMP1, 1;
            dasm_put(Dst, 828);
#line 718 "src/jit/emit_x64.dasc"
        }
        if (op == MVM_OP_lt_n || op == MVM_OP_le_n) {
            //| movsd xmm0, qword WORK[b];
            //| ucomisd xmm0, qword WORK[a];
            dasm_put(Dst, 836, Dt14([b]), Dt14([a]));
#line 722 "src/jit/emit_x64.dasc"
        } else {
            //| movsd xmm0, qword WORK[a];
            //| ucomisd xmm0, qword WORK[b];
            dasm_put(Dst, 836, Dt14([a]), Dt14([b]));
#line 725 "src/jit/emit_x64.dasc"
        }

        if (op == MVM_OP_le_n || op == MVM_OP_ge_n) {
            //| setae TMP1b;
            dasm_put(Dst, 848);
#line 729 "src/jit/emit_x64.dasc"
        } else if (op == MVM_OP_eq_n) {
            //| setnp TMP2b; // zero if either is NaN, 1 otherwise
            //| cmove TMP1, TMP2; // if equal, overwrite 0 with 1
            dasm_put(Dst, 852);
#line 732 "src/jit/emit_x64.dasc"
        } else if (op == MVM_OP_ne_n) {
            //| setp TMP2b; // 1 if either is NaN (in which case they can't be equal)
            //| cmove TMP1, TMP2; // if equal, overwrite 1 with IsNan(a) | IsNaN(b)
            dasm_put(Dst, 860);
#line 735 "src/jit/emit_x64.dasc"
        } else {
            //| seta TMP1b;
            dasm_put(Dst, 868);
#line 737 "src/jit/emit_x64.dasc"
        }
        //| movzx TMP1, TMP1b;
        //| mov WORK[dst], TMP1;
        dasm_put(Dst, 872, Dt14([dst]));
#line 740 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_isint:
    case MVM_OP_isnum:
    case MVM_OP_isstr:
    case MVM_OP_islist:
    case MVM_OP_ishash: {
        MVMint16 dst = ins->operands[0].reg.orig;
        MVMint16 obj = ins->operands[1].reg.orig;
        MVMint32 reprid = op == MVM_OP_isint ? MVM_REPR_ID_P6int :
                          op == MVM_OP_isnum ? MVM_REPR_ID_P6num :
                          op == MVM_OP_isstr ? MVM_REPR_ID_P6str :
                          op == MVM_OP_islist ? MVM_REPR_ID_MVMArray :
                     /*  op == MVM_OP_ishash */ MVM_REPR_ID_MVMHash;
        //| mov TMP1, aword WORK[obj];
        //| test TMP1, TMP1;
        //| jz >1;
        //| mov TMP1, OBJECT:TMP1->st;
        //| mov TMP1, STABLE:TMP1->REPR;
        //| cmp qword REPR:TMP1->ID, reprid;
        //| jne >1;
        //| mov qword WORK[dst], 1;
        //| jmp >2;
        //|1:
        //| mov qword WORK[dst], 0;
        //|2:
        dasm_put(Dst, 881, Dt14([obj]), Dt7(->st), Dt9(->REPR), DtA(->ID), reprid, Dt14([dst]), Dt14([dst]));
#line 766 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_isnonnull: {
        MVMint16 dst = ins->operands[0].reg.orig;
        MVMint16 obj = ins->operands[1].reg.orig;
        //| mov TMP1, WORK[obj];
        //| test TMP1, TMP1;
        //| setnz TMP2b;
        //| get_vmnull TMP3;
        //| cmp TMP1, TMP3;
        //| setne TMP3b;
        //| and TMP2b, TMP3b;
        //| movzx TMP2, TMP2b;
        //| mov WORK[dst], TMP2;
        dasm_put(Dst, 934, Dt14([obj]), Dt13(->instance), Dt6(->VMNull), Dt14([dst]));
#line 780 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_isnull: {
        MVMint16 dst = ins->operands[0].reg.orig;
        MVMint16 obj = ins->operands[1].reg.orig;
        //| mov TMP1, WORK[obj];
        //| test TMP1, TMP1;
        //| setz TMP2b;
        //| get_vmnull TMP3;
        //| cmp TMP1, TMP3;
        //| sete TMP3b;
        //| or TMP2b, TMP3b;
        //| movzx TMP2, TMP2b;
        //| mov WORK[dst], TMP2;
        dasm_put(Dst, 971, Dt14([obj]), Dt13(->instance), Dt6(->VMNull), Dt14([dst]));
#line 794 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_sp_fastcreate: {
        MVMint16 dst       = ins->operands[0].reg.orig;
        MVMuint16 size     = ins->operands[1].lit_i16;
        MVMint16 spesh_idx = ins->operands[2].lit_i16;
        //| mov ARG1, TC;
        //| mov ARG2, size;
        //| callp &MVM_gc_allocate_zeroed;
        //| get_spesh_slot TMP1, spesh_idx;
        //| mov aword OBJECT:RV->st, TMP1;  // st is 64 bit (pointer)
        //| mov word OBJECT:RV->header.size, size; // object size is 16 bit
        //| mov TMP1d, dword TC->thread_id;  // thread id is 32 bit
        //| mov dword OBJECT:RV->header.owner, TMP1d; // does this even work?
        //| mov aword WORK[dst], RV; // store in local register
        dasm_put(Dst, 1008, size, (unsigned int)((uintptr_t)&MVM_gc_allocate_zeroed), (unsigned int)(((uintptr_t)&MVM_gc_allocate_zeroed)>>32), Dt15(->effective_spesh_slots), DtC([spesh_idx]), Dt7(->st), Dt7(->header.size), size, Dt13(->thread_id), Dt7(->header.owner), Dt14([dst]));
#line 809 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_decont: {
        MVMint16 dst = ins->operands[0].reg.orig;
        MVMint16 src = ins->operands[1].reg.orig;
        //| mov TMP5, WORK[src];
        //| test TMP5, TMP5;
        dasm_put(Dst, 1055, Dt14([src]));
#line 816 "src/jit/emit_x64.dasc"
        // obj is null
        //| jz >1;
        //| is_type_object TMP5;
        dasm_put(Dst, 1063, Dt7(->header.flags), MVM_CF_TYPE_OBJECT);
#line 819 "src/jit/emit_x64.dasc"
        // object is type object (not concrete)
        //| jnz >1;
        //| mov TMP6, OBJECT:TMP5->st;
        //| mov TMP6, STABLE:TMP6->container_spec;
        //| test TMP6, TMP6;
        dasm_put(Dst, 1075, Dt7(->st), Dt9(->container_spec));
#line 824 "src/jit/emit_x64.dasc"
        // container spec is zero
        //| jz >1;
        //| mov ARG1, TC;
        //| mov ARG2, TMP5;      // object
        //| lea ARG3, WORK[dst]; // destination register
        //| mov FUNCTION, CONTAINERSPEC:TMP6->fetch; // get function pointer
        //| call FUNCTION;
        //| jmp >2;
        //|1:
        dasm_put(Dst, 1091, Dt14([dst]), DtD(->fetch));
#line 833 "src/jit/emit_x64.dasc"
        // otherwise just move the object into the register
        //| mov WORK[dst], TMP5;
        //|2:
        dasm_put(Dst, 1121, Dt14([dst]));
#line 836 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_sp_namedarg_used: {
        MVMuint16 param = ins->operands[0].lit_i16;
        //| mov TMP1, FRAME->params.named_used;
        //| mov byte U8:TMP1[param], 1;
        dasm_put(Dst, 1128, Dt15(->params.named_used), DtF([param]));
#line 842 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_sp_findmeth: {
        MVMint16 dst = ins->operands[0].reg.orig;
        MVMint16 obj = ins->operands[1].reg.orig;
        MVMint32 str_idx = ins->operands[2].lit_str_idx;
        MVMuint16 ss_idx = ins->operands[3].lit_i16;
        //| get_spesh_slot TMP1, ss_idx;
        //| mov TMP2, WORK[obj];
        //| mov TMP2, OBJECT:TMP2->st;
        //| cmp TMP1, TMP2;
        //| jne >1;
        //| get_spesh_slot TMP3, ss_idx + 1;
        //| mov WORK[dst], TMP3;
        //| jmp >2;
        //|1:
        //| mov ARG1, TC;
        //| mov ARG2, WORK[obj];
        //| get_string ARG3, str_idx;
        //| mov ARG4, ss_idx;
        //| lea TMP6, WORK[dst];
        //|.if WIN32;
        //| mov qword [rsp+0x20], TMP6;
        //|.else;
        //| mov ARG5, TMP6;
        //|.endif
        //| callp &MVM_6model_find_method_spesh;
        //| test RV, RV;
        //| jz >2;
        dasm_put(Dst, 1139, Dt15(->effective_spesh_slots), DtC([ss_idx]), Dt14([obj]), Dt7(->st), Dt15(->effective_spesh_slots), DtC([ss_idx + 1]), Dt14([dst]), Dt14([obj]), Dt16(->body.strings), DtB([str_idx]), ss_idx, Dt14([dst]), (unsigned int)((uintptr_t)&MVM_6model_find_method_spesh), (unsigned int)(((uintptr_t)&MVM_6model_find_method_spesh)>>32));
#line 871 "src/jit/emit_x64.dasc"
        /* invokish, fall out to the interpreter */
        //| mov RV, 1;
        //| lea TMP1, [>2];
        //| mov aword FRAME->jit_entry_label, TMP1;
        //| jmp ->out;
        //|2:
        dasm_put(Dst, 1227, Dt15(->jit_entry_label));
#line 877 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_isconcrete: {
        MVMint16 dst = ins->operands[0].reg.orig;
        MVMint16 obj = ins->operands[1].reg.orig;
        //| mov TMP1, WORK[obj];
        //| test TMP1, TMP1;
        //| jz >1;
        //| is_type_object TMP1;
        //| jnz >1;
        //| mov qword WORK[dst], 1;
        //| jmp >2;
        //|1:
        //| mov qword WORK[dst], 0;
        //|2:
        dasm_put(Dst, 1252, Dt14([obj]), Dt7(->header.flags), MVM_CF_TYPE_OBJECT, Dt14([dst]), Dt14([dst]));
#line 892 "src/jit/emit_x64.dasc"
        break;
    }
    default:
        MVM_exception_throw_adhoc(tc, "Can't JIT opcode <%s>", ins->info->name);
    }
}



/* Call argument decoder */
static void load_call_arg(MVMThreadContext *tc, MVMJitGraph *jg,
                          MVMJitCallArg arg, dasm_State **Dst) {
    switch(arg.type) {
    case MVM_JIT_INTERP_VAR:
        switch (arg.v.ivar) {
        case MVM_JIT_INTERP_TC:
            //| mov TMP6, TC;
            dasm_put(Dst, 1298);
#line 909 "src/jit/emit_x64.dasc"
            break;
        case MVM_JIT_INTERP_CU:
            //| mov TMP6, CU;
            dasm_put(Dst, 1303);
#line 912 "src/jit/emit_x64.dasc"
            break;
        case MVM_JIT_INTERP_FRAME:
            //| mov TMP6, FRAME;
            dasm_put(Dst, 141);
#line 915 "src/jit/emit_x64.dasc"
            break;
        case MVM_JIT_INTERP_PARAMS:
            //| lea TMP6, FRAME->params;
            dasm_put(Dst, 1308, Dt15(->params));
#line 918 "src/jit/emit_x64.dasc"
            break;
        case MVM_JIT_INTERP_CALLER:
            //| mov TMP6, aword FRAME->caller;
            dasm_put(Dst, 1315, Dt15(->caller));
#line 921 "src/jit/emit_x64.dasc"
            break;
        }
        break;
    case MVM_JIT_REG_VAL:
        //| mov TMP6, qword WORK[arg.v.reg];
        dasm_put(Dst, 1322, Dt14([arg.v.reg]));
#line 926 "src/jit/emit_x64.dasc"
        break;
    case MVM_JIT_REG_VAL_F:
        //| mov TMP6, qword WORK[arg.v.reg];
        dasm_put(Dst, 1322, Dt14([arg.v.reg]));
#line 929 "src/jit/emit_x64.dasc"
        break;
    case MVM_JIT_REG_ADDR:
        //| lea TMP6, WORK[arg.v.reg];
        dasm_put(Dst, 1327, Dt14([arg.v.reg]));
#line 932 "src/jit/emit_x64.dasc"
        break;
    case MVM_JIT_STR_IDX:
        //| get_string TMP6, arg.v.lit_i64;
        dasm_put(Dst, 1332, Dt16(->body.strings), DtB([arg.v.lit_i64]));
#line 935 "src/jit/emit_x64.dasc"
        break;
    case MVM_JIT_LITERAL:
        //| mov TMP6, arg.v.lit_i64;
        dasm_put(Dst, 1341, arg.v.lit_i64);
#line 938 "src/jit/emit_x64.dasc"
        break;
    case MVM_JIT_LITERAL_64:
    case MVM_JIT_LITERAL_PTR:
    case MVM_JIT_LITERAL_F:
        //| mov64 TMP6, arg.v.lit_i64;
        dasm_put(Dst, 1346, (unsigned int)(arg.v.lit_i64), (unsigned int)((arg.v.lit_i64)>>32));
#line 943 "src/jit/emit_x64.dasc"
        break;
    }
}

static void emit_gpr_arg(MVMThreadContext *tc, MVMJitGraph *jg,
                         MVMint32 i, dasm_State **Dst) {
    switch (i) {
    case 0:
        //| mov ARG1, TMP6;
        dasm_put(Dst, 1351);
#line 952 "src/jit/emit_x64.dasc"
        break;
    case 1:
        //| mov ARG2, TMP6;
        dasm_put(Dst, 1355);
#line 955 "src/jit/emit_x64.dasc"
        break;
    case 2:
        //| mov ARG3, TMP6;
        dasm_put(Dst, 1359);
#line 958 "src/jit/emit_x64.dasc"
        break;
    case 3:
        //| mov ARG4, TMP6;
        dasm_put(Dst, 1363);
#line 961 "src/jit/emit_x64.dasc"
        break;
//|.if POSIX
    case 4:
//|        mov ARG5, TMP6;
dasm_put(Dst, 1367);
       break;
#line 966 "src/jit/emit_x64.dasc"
  case 5:
//|      mov ARG6, TMP6;
dasm_put(Dst, 1371);
     break;
#line 969 "src/jit/emit_x64.dasc"
//|.endif
    default:
        MVM_exception_throw_adhoc(tc, "JIT: can't store %d arguments in GPR", i);
    }
}

static void emit_sse_arg(MVMThreadContext *tc, MVMJitGraph *jg,
                         MVMint32 i, dasm_State **Dst) {
    switch (i) {
    case 0:
        //| movd ARG1F, TMP6;
        dasm_put(Dst, 1375);
#line 980 "src/jit/emit_x64.dasc"
        break;
    case 1:
        //| movd ARG2F, TMP6;
        dasm_put(Dst, 1381);
#line 983 "src/jit/emit_x64.dasc"
        break;
    case 2:
        //| movd ARG3F, TMP6;
        dasm_put(Dst, 1387);
#line 986 "src/jit/emit_x64.dasc"
        break;
    case 3:
        //| movd ARG4F, TMP6;
        dasm_put(Dst, 1393);
#line 989 "src/jit/emit_x64.dasc"
        break;
//|.if POSIX
    case 4:
//|        movd ARG5F, TMP6;
dasm_put(Dst, 1399);
       break;
#line 994 "src/jit/emit_x64.dasc"
    case 5:
//|         movd ARG6F, TMP6;
dasm_put(Dst, 1405);
        break;
#line 997 "src/jit/emit_x64.dasc"
    case 6:
//|        movd ARG5F, TMP6;
dasm_put(Dst, 1399);
       break;
#line 1000 "src/jit/emit_x64.dasc"
    case 7:
//|        movd ARG5F, TMP6;
dasm_put(Dst, 1399);
       break;
#line 1003 "src/jit/emit_x64.dasc"
//|.endif
    default:
        MVM_exception_throw_adhoc(tc, "JIT: can't put  %d arguments in SSE", i);
    }
}

static void emit_stack_arg(MVMThreadContext *tc, MVMJitGraph *jg,
                           MVMint32 arg_size, MVMint32 pos,
                           dasm_State **Dst) {
    /* basically, stack argumetns are passed in right-to-left order
       on both POSIX and W64 backends, it seems. Thus the most logical
       thing to do is to count from the stack top upwards. */
    if (pos + arg_size > 64) {
        MVM_exception_throw_adhoc(tc, "JIT: trying to pass arguments "
                                  " in local space (stack top offset: "
                                  " %d, size: %d)", pos, arg_size);
    }
    switch(arg_size) {
    case 1:
        //| mov byte [rsp+pos], TMP6b;
        dasm_put(Dst, 1412, pos);
#line 1023 "src/jit/emit_x64.dasc"
        break;
    case 2:
        //| mov word [rsp+pos], TMP6w;
        dasm_put(Dst, 1419, pos);
#line 1026 "src/jit/emit_x64.dasc"
        break;
    case 4:
        //| mov dword [rsp+pos], TMP6d;
        dasm_put(Dst, 1420, pos);
#line 1029 "src/jit/emit_x64.dasc"
        break;
    case 8:
        //| mov qword [rsp+pos], TMP6;
        dasm_put(Dst, 1427, pos);
#line 1032 "src/jit/emit_x64.dasc"
        break;
    default:
        MVM_exception_throw_adhoc(tc, "JIT: can't pass arguments size %d bytes",
                                  arg_size);
    }
}

static void emit_posix_callargs(MVMThreadContext *tc, MVMJitGraph *jg,
                                MVMJitCallArg args[], MVMint32 num_args,
                                dasm_State **Dst) {
    MVMint32 num_gpr = 0, num_fpr = 0, num_stack = 0, i;
    MVMJitCallArg in_gpr[6], in_fpr[8], *on_stack = NULL;
    if (num_args > 6)
        on_stack = malloc(sizeof(MVMJitCallArg) * (num_args - 6));
    /* divide in gpr, fpr, stack values */
    for (i = 0; i < num_args; i++) {
        switch (args[i].type) {
        case MVM_JIT_INTERP_VAR:
        case MVM_JIT_REG_VAL:
        case MVM_JIT_REG_ADDR:
        case MVM_JIT_STR_IDX:
        case MVM_JIT_LITERAL:
        case MVM_JIT_LITERAL_64:
        case MVM_JIT_LITERAL_PTR:
            if (num_gpr < 6) {
                in_gpr[num_gpr++] = args[i];
            } else {
                on_stack[num_stack++] = args[i];
            }
            break;
        case MVM_JIT_REG_VAL_F:
        case MVM_JIT_LITERAL_F:
            if (num_fpr < 8) {
                in_fpr[num_fpr++] = args[i];
            } else {
                on_stack[num_stack++] = args[i];
            }
            break;
        }
    }
    for (i = 0; i < num_gpr; i++) {
        load_call_arg(tc, jg, in_gpr[i], Dst);
        emit_gpr_arg(tc, jg, i, Dst);
    }
    for (i = 0; i < num_fpr; i++) {
        load_call_arg(tc, jg, in_fpr[i], Dst);
        emit_sse_arg(tc, jg, i, Dst);
    }
    /* push right-to-left */
    for (i = 0; i < num_stack; i++) {
        load_call_arg(tc, jg, on_stack[i], Dst);
        // I'm not sure this is correct, btw
        emit_stack_arg(tc, jg, 8, i*8, Dst);
    }
    if (on_stack)
        free(on_stack);
}

static void emit_win64_callargs(MVMThreadContext *tc, MVMJitGraph *jg,
                                MVMJitCallArg args[], MVMint32 num_args,
                                dasm_State **Dst) {
    MVMint32 i;
    MVMint32 num_reg_args = (num_args > 4 ? 4 : num_args);
    for (i = 0; i < num_reg_args; i++) {
        load_call_arg(tc, jg, args[i], Dst);
        if (args[i].type == MVM_JIT_REG_VAL_F ||
            args[i].type == MVM_JIT_LITERAL_F) {
            emit_sse_arg(tc, jg, i, Dst);
        } else {
            emit_gpr_arg(tc, jg, i, Dst);
        }
    }
    for (; i < num_args; i++) {
        load_call_arg(tc, jg, args[i], Dst);
        emit_stack_arg(tc, jg, 8, i * 8, Dst);
    }
}

void MVM_jit_emit_call_c(MVMThreadContext *tc, MVMJitGraph *jg,
                         MVMJitCallC * call_spec, dasm_State **Dst) {

    MVM_jit_log(tc, "emit c call <%d args>\n", call_spec->num_args);
    if (call_spec->has_vargs) {
        MVM_exception_throw_adhoc(tc, "JIT can't handle varargs yet");
    }
    //|.if WIN32;
#line 1119 "src/jit/emit_x64.dasc"
    //|.else;
     emit_posix_callargs(tc, jg, call_spec->args, call_spec->num_args, Dst);
    //|.endif
    /* Emit the call. I think we should be able to do something smarter than
     * store the constant into the bytecode, like a data segment. But I'm
     * not sure. */
    //| callp call_spec->func_ptr;
    dasm_put(Dst, 179, (unsigned int)((uintptr_t)call_spec->func_ptr), (unsigned int)(((uintptr_t)call_spec->func_ptr)>>32));
#line 1126 "src/jit/emit_x64.dasc"
    /* right, now determine what to do with the return value */
    switch(call_spec->rv_mode) {
    case MVM_JIT_RV_VOID:
        break;
    case MVM_JIT_RV_INT:
    case MVM_JIT_RV_PTR:
        //| mov WORK[call_spec->rv_idx], RV;
        dasm_put(Dst, 697, Dt14([call_spec->rv_idx]));
#line 1133 "src/jit/emit_x64.dasc"
        break;
    case MVM_JIT_RV_NUM:
        //| movsd qword WORK[call_spec->rv_idx], RVF;
        dasm_put(Dst, 749, Dt14([call_spec->rv_idx]));
#line 1136 "src/jit/emit_x64.dasc"
        break;
    case MVM_JIT_RV_DEREF:
        //| mov TMP1, [RV];
        //| mov WORK[call_spec->rv_idx], TMP1;
        dasm_put(Dst, 1434, Dt14([call_spec->rv_idx]));
#line 1140 "src/jit/emit_x64.dasc"
        break;
    case MVM_JIT_RV_ADDR:
        /* store local at address */
        //| mov TMP1, WORK[call_spec->rv_idx];
        //| mov [RV], TMP1;
        dasm_put(Dst, 1442, Dt14([call_spec->rv_idx]));
#line 1145 "src/jit/emit_x64.dasc"
        break;
    }
}

void MVM_jit_emit_branch(MVMThreadContext *tc, MVMJitGraph *jg,
                         MVMJitBranch * branch, dasm_State **Dst) {
    MVMSpeshIns *ins = branch->ins;
    MVMint32 name = branch->dest;
    /* move gc sync point to the front so as to not have
     * awkward dispatching issues */
    //| gc_sync_point;
    dasm_put(Dst, 1450, Dt13(->gc_status), (unsigned int)((uintptr_t)&MVM_gc_enter_from_interrupt), (unsigned int)(((uintptr_t)&MVM_gc_enter_from_interrupt)>>32));
#line 1156 "src/jit/emit_x64.dasc"
    if (ins == NULL || ins->info->opcode == MVM_OP_goto) {
        MVM_jit_log(tc, "emit jump to label %d\n", name);
        if (name == MVM_JIT_BRANCH_EXIT) {
            //| jmp ->exit
            dasm_put(Dst, 1474);
#line 1160 "src/jit/emit_x64.dasc"
        } else {
            //| jmp =>(name)
            dasm_put(Dst, 1479, (name));
#line 1162 "src/jit/emit_x64.dasc"
        }
    } else {
        MVMint16 val = ins->operands[0].reg.orig;
        MVM_jit_log(tc, "emit branch <%s> to label %d\n",
                    ins->info->name, name);
        switch(ins->info->opcode) {
        case MVM_OP_if_i:
            //| mov rax, WORK[val];
            //| test rax, rax;
            //| jnz =>(name); // jump to dynamic label
            dasm_put(Dst, 1483, Dt14([val]), (name));
#line 1172 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_unless_i:
            //| mov rax, WORK[val];
            //| test rax, rax;
            //| jz =>(name);
            dasm_put(Dst, 1494, Dt14([val]), (name));
#line 1177 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_ifnonnull:
            //| mov TMP1, WORK[val];
            //| test TMP1, TMP1;
            //| jz >1;
            //| get_vmnull TMP2;
            //| cmp TMP1, TMP2;
            //| je >1;
            //| jmp =>(name);
            //|1:
            dasm_put(Dst, 1505, Dt14([val]), Dt13(->instance), Dt6(->VMNull), (name));
#line 1187 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_indexat: {
            MVMint16 offset = ins->operands[1].reg.orig;
            MVMuint32 str_idx = ins->operands[2].lit_str_idx;
            //| mov ARG1, TC;
            //| mov ARG2, WORK[val];
            //| mov ARG3, WORK[offset];
            //| get_string ARG4, str_idx;
            //| callp &MVM_string_char_at_in_string;
            //| cmp RV, 0;
            //| jl =>(name);
            dasm_put(Dst, 1537, Dt14([val]), Dt14([offset]), Dt16(->body.strings), DtB([str_idx]), (unsigned int)((uintptr_t)&MVM_string_char_at_in_string), (unsigned int)(((uintptr_t)&MVM_string_char_at_in_string)>>32), (name));
#line 1198 "src/jit/emit_x64.dasc"
            break;
        }
        default:
            MVM_exception_throw_adhoc(tc, "JIT: Can't handle conditional <%s>",
                                      ins->info->name);
        }
    }
}

void MVM_jit_emit_label(MVMThreadContext *tc, MVMJitGraph *jg,
                        MVMJitLabel *label, dasm_State **Dst) {
    //| =>(label->name):
    dasm_put(Dst, 265, (label->name));
#line 1210 "src/jit/emit_x64.dasc"
}

void MVM_jit_emit_guard(MVMThreadContext *tc, MVMJitGraph *jg,
                        MVMJitGuard *guard, dasm_State **Dst) {
    MVMint16 op        = guard->ins->info->opcode;
    MVMint16 obj       = guard->ins->operands[0].lit_i16;
    MVMint16 spesh_idx = guard->ins->operands[1].lit_i16;
    MVM_jit_log(tc, "emit guard <%s>\n", guard->ins->info->name);
    /* load object and spesh slot value */
    //| mov TMP1, WORK[obj];
    //| get_spesh_slot TMP2, spesh_idx;
    dasm_put(Dst, 1574, Dt14([obj]), Dt15(->effective_spesh_slots), DtC([spesh_idx]));
#line 1221 "src/jit/emit_x64.dasc"
    if (op == MVM_OP_sp_guardtype) {
        /* object in queston should be a type object, so it shouldn't
         * be zero, should not be concrete, and the STABLE should be
         * equal to the value in the spesh slot */
        /* check for null */
        //| cmp TMP1, 0;
        //| je >1;
        dasm_put(Dst, 1589);
#line 1228 "src/jit/emit_x64.dasc"
        /* check if type object (not concrete) */
        //| is_type_object TMP1;
        dasm_put(Dst, 1599, Dt7(->header.flags), MVM_CF_TYPE_OBJECT);
#line 1230 "src/jit/emit_x64.dasc"
        /* if zero, this is a concrete object, and we should deopt */
        //| jz >1;
        dasm_put(Dst, 1594);
#line 1232 "src/jit/emit_x64.dasc"
        /* get stable and compare */
        //| cmp TMP2, OBJECT:TMP1->st;
        //| jne >1;
        dasm_put(Dst, 1606, Dt7(->st));
#line 1235 "src/jit/emit_x64.dasc"
        /* we're good, no need to deopt */
    } else if (op == MVM_OP_sp_guardconc) {
        /* object should be a non-null concrete (non-type) object */
        //| cmp TMP1, 0;
        //| je >1;
        dasm_put(Dst, 1589);
#line 1240 "src/jit/emit_x64.dasc"
        /* shouldn't be type object */
        //| is_type_object TMP1;
        //| jnz >1;
        dasm_put(Dst, 1615, Dt7(->header.flags), MVM_CF_TYPE_OBJECT);
#line 1243 "src/jit/emit_x64.dasc"
        /* should have our stable */
        //| cmp TMP2, OBJECT:TMP1->st;
        //| jne >1;
        dasm_put(Dst, 1606, Dt7(->st));
#line 1246 "src/jit/emit_x64.dasc"
    }
    /* if we're here, we didn't jump to deopt, so skip it */
    //| jmp >2;
    //|1:
    dasm_put(Dst, 1114);
#line 1250 "src/jit/emit_x64.dasc"
    /* emit deopt */
    //| mov ARG1, TC;
    //| mov ARG2, guard->deopt_offset;
    //| mov ARG3, guard->deopt_target;
    //| callp &MVM_spesh_deopt_one_direct;
    dasm_put(Dst, 1626, guard->deopt_offset, guard->deopt_target, (unsigned int)((uintptr_t)&MVM_spesh_deopt_one_direct), (unsigned int)(((uintptr_t)&MVM_spesh_deopt_one_direct)>>32));
#line 1255 "src/jit/emit_x64.dasc"
    /* tell jit driver we're deopting */
    //| mov RV, MVM_JIT_CTRL_DEOPT
    //| jmp ->out;
    //|2:
    dasm_put(Dst, 1647, MVM_JIT_CTRL_DEOPT);
#line 1259 "src/jit/emit_x64.dasc"
}

void MVM_jit_emit_invoke(MVMThreadContext *tc, MVMJitGraph *jg, MVMJitInvoke *invoke,
                         dasm_State **Dst) {
    MVMint16 i;
    MVM_jit_log(tc, "Emit invoke (%d args)\n", invoke->arg_count);
    /* setup the callsite */
    //| mov ARG1, TC;
    //| mov ARG2, CU;
    //| mov ARG3, invoke->callsite_idx;
    //| callp &MVM_args_prepare;
    //| mov TMP6, RV; // store callsite in tmp6, which we don't use until the end
    dasm_put(Dst, 1658, invoke->callsite_idx, (unsigned int)((uintptr_t)&MVM_args_prepare), (unsigned int)(((uintptr_t)&MVM_args_prepare)>>32));
#line 1271 "src/jit/emit_x64.dasc"
    /* Store arguments in the buffer. I use TMP5 as it never conflicts
     * with argument passing (like TMP6, but unlike other TMP regs) */
    //| mov TMP5, FRAME->args;
    dasm_put(Dst, 1682, Dt15(->args));
#line 1274 "src/jit/emit_x64.dasc"
    for (i = 0;  i < invoke->arg_count; i++) {
        MVMSpeshIns *ins = invoke->arg_ins[i];
        switch (ins->info->opcode) {
        case MVM_OP_arg_i:
        case MVM_OP_arg_s:
        case MVM_OP_arg_n:
        case MVM_OP_arg_o: {
            MVMint16 dst = ins->operands[0].lit_i16;
            MVMint16 src = ins->operands[1].reg.orig;
            //| mov TMP4, WORK[src];
            //| mov REGISTER:TMP5[dst], TMP4;
            dasm_put(Dst, 1689, Dt14([src]), Dt1([dst]));
#line 1285 "src/jit/emit_x64.dasc"
            break;
        }
        case MVM_OP_argconst_n:
        case MVM_OP_argconst_i: {
            MVMint16 dst = ins->operands[0].lit_i16;
            MVMint64 val = ins->operands[1].lit_i64;
            //| mov64 TMP4, val;
            //| mov REGISTER:TMP5[dst], TMP4;
            dasm_put(Dst, 1698, (unsigned int)(val), (unsigned int)((val)>>32), Dt1([dst]));
#line 1293 "src/jit/emit_x64.dasc"
            break;
        }
        case MVM_OP_argconst_s: {
            MVMint16 dst = ins->operands[0].lit_i16;
            MVMint32 idx = ins->operands[1].lit_str_idx;
            //| get_string TMP4, idx;
            //| mov REGISTER:TMP5[dst], TMP4;
            dasm_put(Dst, 1707, Dt16(->body.strings), DtB([idx]), Dt1([dst]));
#line 1300 "src/jit/emit_x64.dasc"
            break;
        }
        default:
            MVM_exception_throw_adhoc(tc, "JIT invoke: Can't add arg <%s>",
                                      ins->info->name);
        }
    }

    /* Setup the frame for returning to our current position */
    if (sizeof(MVMReturnType) == 4) {
        //| mov dword FRAME->return_type, invoke->return_type;
        dasm_put(Dst, 1720, Dt15(->return_type), invoke->return_type);
#line 1311 "src/jit/emit_x64.dasc"
    } else {
        MVM_exception_throw_adhoc(tc, "JIT: MVMReturnType has unexpected size");
    }
    /* The register for our return value */
    if (invoke->return_type == MVM_RETURN_VOID) {
        //| mov aword FRAME->return_value, NULL;
        dasm_put(Dst, 1728, Dt15(->return_value), NULL);
#line 1317 "src/jit/emit_x64.dasc"
    } else {
        //| lea TMP2, WORK[invoke->return_register];
        //| mov aword FRAME->return_value, TMP2;
        dasm_put(Dst, 1736, Dt14([invoke->return_register]), Dt15(->return_value));
#line 1320 "src/jit/emit_x64.dasc"
    }
    /* The return address for the interpreter */
    //| get_cur_op TMP2;
    //| mov aword FRAME->return_address, TMP2;
    dasm_put(Dst, 1747, Dt13(->interp_cur_op), Dt15(->return_address));
#line 1324 "src/jit/emit_x64.dasc"

    /* The re-entry label for the JIT, so that we continue in the next BB */
    //| lea TMP2, [=>(invoke->reentry_label)];
    //| mov aword FRAME->jit_entry_label, TMP2;
    dasm_put(Dst, 1761, (invoke->reentry_label), Dt15(->jit_entry_label));
#line 1328 "src/jit/emit_x64.dasc"

    /* if we're not fast, then we should get the code from multi resolution */
    if (!invoke->is_fast) {
        /* first, save callsite and args */
        //| mov qword [rbp-0x28], TMP5; // args
        //| mov qword [rbp-0x30], TMP6; // callsite
        dasm_put(Dst, 1772);
#line 1334 "src/jit/emit_x64.dasc"
        /* setup call MVM_frame_multi_ok(tc, code, &cur_callsite, args); */
        //| mov ARG1, TC;
        //| mov ARG2, WORK[invoke->code_register]; // code object
        //| lea ARG3, [rbp-0x30];                  // &cur_callsite
        //| mov ARG4, TMP5;                        // args
        //| callp &MVM_frame_find_invokee_multi_ok;
        dasm_put(Dst, 1781, Dt14([invoke->code_register]), (unsigned int)((uintptr_t)&MVM_frame_find_invokee_multi_ok), (unsigned int)(((uintptr_t)&MVM_frame_find_invokee_multi_ok)>>32));
#line 1340 "src/jit/emit_x64.dasc"
        /* restore callsite, args, RV now holds code object */
        //| mov TMP6, [rbp-0x30]; // callsite
        //| mov TMP5, [rbp-0x28]; // args
        dasm_put(Dst, 1805);
#line 1343 "src/jit/emit_x64.dasc"
        /* setup args for call to invoke(tc, code, cur_callsite, args) */
        //| mov ARG1, TC;
        //| mov ARG2, RV;   // code object
        //| mov ARG3, TMP6; // callsite
        //| mov ARG4, TMP5; // args
        dasm_put(Dst, 1814);
#line 1348 "src/jit/emit_x64.dasc"
        /* get the actual function */
        //| mov FUNCTION, OBJECT:RV->st;
        //| mov FUNCTION, STABLE:FUNCTION->invoke;
        //| call FUNCTION;
        dasm_put(Dst, 1828, Dt7(->st), Dt9(->invoke));
#line 1352 "src/jit/emit_x64.dasc"
    } else {
        /* call MVM_frame_invoke_code */
        //| mov ARG1, TC;
        //| mov ARG2, WORK[invoke->code_register];
        //| mov ARG3, TMP6; // this is the callsite object
        //| mov ARG4, invoke->spesh_cand;
        //| callp &MVM_frame_invoke_code;
        dasm_put(Dst, 1841, Dt14([invoke->code_register]), invoke->spesh_cand, (unsigned int)((uintptr_t)&MVM_frame_invoke_code), (unsigned int)(((uintptr_t)&MVM_frame_invoke_code)>>32));
#line 1359 "src/jit/emit_x64.dasc"
    }
    /* Almost done. jump out into the interprete */
    //| mov RV, 1;
    //| jmp ->out;
    dasm_put(Dst, 1865);
#line 1363 "src/jit/emit_x64.dasc"
}

void MVM_jit_emit_jumplist(MVMThreadContext *tc, MVMJitGraph *jg,
                           MVMJitJumpList *jumplist, dasm_State **Dst) {
    MVMint32 i;
    MVM_jit_log(tc, "Emit jumplist (%d labels)\n", jumplist->num_labels);
    //| mov TMP1, WORK[jumplist->reg];
    //| cmp TMP1, 0;
    //| jl >2;
    //| cmp TMP1, jumplist->num_labels;
    //| jge >2;
    //| imul TMP1, 0x8; // 8 bytes per goto
    //| lea TMP2, [>1];
    //| add TMP2, TMP1;
    //| jmp TMP2;
    //|.align 8;
    //|1:
    dasm_put(Dst, 1877, Dt14([jumplist->reg]), jumplist->num_labels);
#line 1380 "src/jit/emit_x64.dasc"
    for (i = 0; i < jumplist->num_labels; i++) {
        //|=>(jumplist->in_labels[i]):
        //| jmp =>(jumplist->out_labels[i]);
        //|.align 8;
        dasm_put(Dst, 1919, (jumplist->in_labels[i]), (jumplist->out_labels[i]));
#line 1384 "src/jit/emit_x64.dasc"
    }
    //|2:
    dasm_put(Dst, 595);
#line 1386 "src/jit/emit_x64.dasc"
}

void MVM_jit_emit_control(MVMThreadContext *tc, MVMJitGraph *jg,
                          MVMJitControl *ctrl, dasm_State **Dst) {
    if (ctrl->type == MVM_JIT_CONTROL_INVOKISH) {
        MVM_jit_log(tc, "Emit invokish control guard\n");
        //| cmp FRAME, TC->cur_frame;
        //| je >1;
        //| lea TMP1, [>1];
        //| mov aword FRAME->jit_entry_label, TMP1;
        //| mov RV, 1;
        //| jmp ->out;
        //|1:
        dasm_put(Dst, 1926, Dt13(->cur_frame), Dt15(->jit_entry_label));
#line 1399 "src/jit/emit_x64.dasc"
    } else if (ctrl->type == MVM_JIT_CONTROL_BREAKPOINT) {
        //| int 3;
        dasm_put(Dst, 1959);
#line 1401 "src/jit/emit_x64.dasc"
    } else {
        MVM_exception_throw_adhoc(tc, "Unknown conrtol code: <%s>",
                                  ctrl->ins->info->name);
    }
}
