#include "m2c.h"

s32 func_020012c4(s32 *, M2C_UNK, s32);             /* extern */
M2C_UNK func_0200e5a0(s32);                         /* extern */
M2C_UNK func_0200eac0(s32, M2C_UNK, M2C_UNK, s32);  /* extern */

void func_0200a548(void *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4, s32 arg5) {
    s32 sp0;

    M2C_FIELD(arg0, s32 *, 0x14) = func_020012c4(&sp0, arg1, arg5);
    func_0200e5a0(arg4);
    func_0200eac0(sp0, arg2, arg3, arg4);
}
