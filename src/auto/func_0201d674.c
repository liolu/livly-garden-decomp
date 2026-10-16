
extern void func_0201d688();
extern void func_0201d718();
// clang-format on

/* func_0200e114 from projets/rayman-rr/src/auto/func_0200e114.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
// clang-format off
asm void func_0201d674(void) {
    stmfd sp!, {r0, lr}
    bl func_0201d688
    bl func_0201d718
    ldmfd sp!, {r0, lr}
    bx lr
}
