#include "m2c.h"

M2C_UNK func_0201cb44(s32, s32);                    /* extern */
s32 func_0201d0a8(M2C_UNK, M2C_UNK, s32);           /* extern */
M2C_UNK func_0201d1b0(M2C_UNK, M2C_UNK, s32);       /* extern */
s32 func_02021a80(s32, s32, s32);                   /* extern */
M2C_UNK func_02021a90(s32, s32, M2C_UNK);           /* extern */

s32 func_020011b4(M2C_UNK arg0, s32 (*arg1)(M2C_UNK, s32 *, s32 *)) {
    s32 sp4;
    s32 sp0;
    s32 temp_r0;
    s32 temp_r5;

    temp_r5 = arg1(arg0, &sp0, &sp4);
    temp_r0 = func_0201d0a8(0, -1, sp4);
    func_0201cb44(temp_r0, sp4);
    func_02021a90(temp_r5, sp0, 0);
    if (func_02021a80(temp_r5, temp_r0, sp4) != -1) {
        return temp_r0;
    }
    func_0201d1b0(0, -1, temp_r0);
    return 0;
}
