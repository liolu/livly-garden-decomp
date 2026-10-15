#include "m2c.h"

void func_0200b358(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 temp_r1;

    M2C_FIELD((arg0 + (M2C_FIELD(arg0, u32 *, 4) * 4)), s32 *, 8)    = arg1;
    M2C_FIELD((arg0 + (M2C_FIELD(arg0, u32 *, 4) * 4)), s32 *, 0x48) = arg2;
    M2C_FIELD((arg0 + (M2C_FIELD(arg0, u32 *, 4) * 4)), s32 *, 0x88) = arg3;
    M2C_FIELD(arg0, s32 *, 0)                                        = 1;
    temp_r1                                                          = M2C_FIELD(arg0, u32 *, 4) + 1;
    M2C_FIELD(arg0, u32 *, 4)                                        = temp_r1;
    if (temp_r1 > 0xFU) {
        M2C_FIELD(arg0, u32 *, 4) = 0U;
    }
}
