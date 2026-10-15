#include "m2c.h"

s32 func_02001314(s32 *, M2C_UNK, s32);             /* extern */
s32 func_0200d824(s32, s32 *);                      /* extern */
M2C_UNK func_0200e5e4(s32);                         /* extern */
M2C_UNK func_0200e864(s32, M2C_UNK, M2C_UNK, s32);  /* extern */
M2C_UNK func_0200e95c(s32, s32, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_0201d1b0(M2C_UNK, M2C_UNK, s32);       /* extern */

void func_0200aa74(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, s32 arg4) {
    s32 sp8;
    s32 sp4;
    s32 temp_r0;
    s32 temp_r4;

    sp8     = 0;
    sp4     = 0;
    temp_r0 = func_02001314(&sp8, arg0, arg4);
    temp_r4 = func_0200d824(temp_r0, &sp4);
    func_0200e5e4(arg3);
    if (temp_r4 != 0) {
        func_0200e95c(sp8, sp4, arg1, arg2, arg3);
    } else {
        func_0200e864(sp8, arg1, arg2, arg3);
    }
    func_0201d1b0(0, -1, temp_r0);
}
