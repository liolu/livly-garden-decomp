#include "m2c.h"

s32 func_020012c4(s32, M2C_UNK, s32);               /* extern */
s32 func_02001314(void *, M2C_UNK, s32);            /* extern */
s32 func_0200135c(void *, M2C_UNK, s32);            /* extern */
s32 func_020013ac(void *, s32, s32);                /* extern */
s32 func_0200d824(s32, void *);                     /* extern */

void func_0200ac74(void *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4, s32 arg5) {
    M2C_FIELD(arg0, s32 *, 0x48) = func_020012c4(arg0 + 0x38, arg1, arg5);
    M2C_FIELD(arg0, s32 *, 0x4C) = func_02001314(arg0 + 0x3C, arg2, arg5);
    M2C_FIELD(arg0, s32 *, 0x50) = func_0200135c(arg0 + 0x40, arg3, arg5);
    M2C_FIELD(arg0, s32 *, 0x54) = func_020013ac(arg0 + 0x44, arg4, arg5);
    M2C_FIELD(arg0, s32 *, 0x5C) = func_0200d824(M2C_FIELD(arg0, s32 *, 0x4C), arg0 + 0x58);
}
