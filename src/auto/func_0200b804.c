#include "engine.h"
#include "m2c.h"

M2C_UNK func_02001314(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_0200135c(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_020013ac(M2C_UNK, M2C_UNK, M2C_UNK);
void func_0200a548(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32);
void func_0200a590(void *, M2C_UNK, s32, s32, s32);
s32 func_0200d824(M2C_UNK, s32 *);

void func_0200b804(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9,
                   s32 argA, s32 argB) {
    u32 temp_r0;
    u32 temp_r1;
    u32 temp_r5;

    temp_r1                                                   = *(M2C_UNK *) arg0 + 1;
    *(M2C_UNK *) arg0                                         = temp_r1;
    M2C_FIELD((arg0 + (temp_r1 * 4)), s32 *, 4)               = 1;
    M2C_FIELD((arg0 + (*(M2C_UNK *) arg0 * 4)), s32 *, 0x404) = arg4;
    M2C_FIELD((arg0 + (*(M2C_UNK *) arg0 * 4)), s32 *, 0x604) = arg1;
    temp_r5                                                   = arg3 << 5;
    M2C_FIELD((arg0 + (*(M2C_UNK *) arg0 * 4)), s32 *, 0x804) = argA;
    func_0200a548((void *) arg2, arg5, temp_r5, argA, arg1, argB);
    func_0200a590((void *) arg2, arg6, temp_r5, argA, argB);
    M2C_FIELD(arg1, s32 *, 0x50) = func_0200135c(arg1 + 0x40, arg8, argB);
    M2C_FIELD(arg1, s32 *, 0x54) = func_020013ac(arg1 + 0x44, arg9, argB);
    temp_r0                      = func_02001314(arg1 + 0x3C, arg7, argB);
    M2C_FIELD(arg1, s32 *, 0x4C) = temp_r0;
    M2C_FIELD(arg1, s32 *, 0x5C) = func_0200d824(temp_r0, arg1 + 0x58);
}
