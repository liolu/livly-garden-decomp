#include "m2c.h"

M2C_UNK func_0200c074();                            /* extern */

void func_0200be74(void *arg0, s32 arg1, s16 arg2, s8 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s16 temp_r1;
    s16 temp_r3;

    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
    M2C_FIELD(arg0, s16 *, 0x1C) = arg2;
    M2C_FIELD(arg0, s8 *, 0x25)  = arg3;
    temp_r3                      = (s16) arg5;
    M2C_FIELD(arg0, s32 *, 0x30) = arg4;
    M2C_FIELD(arg0, s16 *, 0x2C) = temp_r3;
    temp_r1                      = (s16) arg6;
    M2C_FIELD(arg0, s16 *, 0x2E) = temp_r1;
    M2C_FIELD(arg0, s16 *, 0x28) = temp_r3;
    M2C_FIELD(arg0, s16 *, 0x2A) = temp_r1;
    if (M2C_FIELD(arg0, s32 *, 0x18) != 0x400) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x30) == 0) {
        return;
    }
    func_0200c074(arg0);
}
