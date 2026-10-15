#include "engine.h"
#include "m2c.h"

void func_0200abe8(s32);
void func_0200ac74(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32);

void func_0200b778(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9) {
    s32 temp_r4;

    temp_r4                                                   = *(M2C_UNK *) arg0 + 1;
    *(M2C_UNK *) arg0                                         = temp_r4;
    M2C_FIELD((arg0 + (temp_r4 * 4)), s32 *, 4)               = 0;
    M2C_FIELD((arg0 + (*(M2C_UNK *) arg0 * 4)), s32 *, 0x204) = arg2;
    M2C_FIELD((arg0 + (*(M2C_UNK *) arg0 * 4)), s32 *, 0x404) = arg3;
    M2C_FIELD((arg0 + (*(M2C_UNK *) arg0 * 4)), s32 *, 0x604) = arg1;
    M2C_FIELD((arg0 + (*(M2C_UNK *) arg0 * 4)), s32 *, 0x804) = arg8;
    func_0200abe8(arg1);
    func_0200ac74((void *) arg1, arg4, arg5, arg6, arg7, arg9);
}
