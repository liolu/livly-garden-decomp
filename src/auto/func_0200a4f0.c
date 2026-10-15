#include "m2c.h"

s32 func_020012c4(s32 *, M2C_UNK, s32);             /* extern */
M2C_UNK func_0200e5a0(M2C_UNK);                     /* extern */
M2C_UNK func_0200e638(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0201d1b0(M2C_UNK, M2C_UNK, s32);       /* extern */

void func_0200a4f0(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4) {
    s32 sp0;
    s32 temp_r4;

    temp_r4 = func_020012c4(&sp0, arg0, arg4);
    func_0200e5a0(arg3);
    func_0200e638(sp0, arg1, arg2, arg3);
    func_0201d1b0(0, -1, temp_r4);
}
