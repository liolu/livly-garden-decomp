#include "m2c.h"

s32 func_02001238(M2C_UNK, s32);                    /* extern */

void func_0200a590(void *arg0, M2C_UNK arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(arg0, s32 *, 4)    = arg2;
    M2C_FIELD(arg0, s32 *, 8)    = arg3;
    M2C_FIELD(arg0, s32 *, 0)    = 1;
    M2C_FIELD(arg0, s32 *, 0x10) = func_02001238(arg1, arg4);
}
