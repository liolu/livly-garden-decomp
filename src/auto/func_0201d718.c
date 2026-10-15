#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0201d53c();
extern void func_0201d54c();
extern char data_0212ce48[];
extern char data_0212ce4c[];
extern char data_0212ce50[];
extern char data_0212ce74[];
// clang-format off
asm void func_0201d718(void) {
    stmfd sp!, {r3, lr}
    ldr r0, =data_0212ce48
    ldr r0, [r0, #0x8]
    cmp r0, #0x0
    ldmeqfd sp!, {r3, pc}
    mrs r2, cpsr
    mov r0, sp
    ldr r1, =0x9f
    msr cpsr_fsxc, r1
    mov r1, sp
    mov sp, r0
    stmfd sp!, {r1, r2}
    bl func_0201d53c
    ldr r0, =data_0212ce74
    ldr r1, =data_0212ce4c
    ldr r1, [r1, #0x0]
    ldr ip, =data_0212ce50
    ldr ip, [ip, #0x0]
    ldr lr, =0x201d768
    bx ip
    bl func_0201d54c
    ldmfd sp!, {r1, r2}
    mov sp, r1
    msr cpsr_fsxc, r2
    ldmfd sp!, {r3, pc}
}
// clang-format on
