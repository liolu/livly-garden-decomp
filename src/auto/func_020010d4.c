#include "m2c.h"

M2C_UNK func_02001114(u32 *, s32);                  /* extern */
M2C_UNK func_0201cb44(s32, u32);                    /* extern */
s32 func_0201d0a8(M2C_UNK, M2C_UNK, u32);           /* extern */

s32 func_020010d4(u32 *arg0) {
    s32 temp_r0;
    u32 temp_r5;

    temp_r5 = (u32) *arg0 >> 8;
    temp_r0 = func_0201d0a8(0, -1, temp_r5);
    func_0201cb44(temp_r0, temp_r5);
    func_02001114(arg0, temp_r0);
    return temp_r0;
}
