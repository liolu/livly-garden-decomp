#include "m2c.h"

s32 func_020011b4(M2C_UNK, M2C_UNK (*)(M2C_UNK, M2C_UNK *, s32 *)); /* extern */
M2C_UNK func_0201aee8();                            /* extern */
M2C_UNK func_0201af88(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_0201aff8();                            /* extern */
M2C_UNK func_0201b138();                            /* extern */
M2C_UNK func_0201b150(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_0201b1b4();                            /* extern */
M2C_UNK func_0201d1b0(M2C_UNK, M2C_UNK, s32);       /* extern */

void func_0200146c(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK (*arg2)(M2C_UNK, M2C_UNK *, s32 *), s32 arg3) {
    M2C_UNK sp4;
    s32 sp0;
    s32 temp_r0;

    arg2(arg1, &sp4, &sp0);
    temp_r0 = func_020011b4(arg1, arg2);
    if (temp_r0 == 0) {
        return;
    }
    if (arg3 == 0) {
        func_0201aee8();
        func_0201af88(temp_r0, arg0, sp0);
        func_0201aff8();
    } else {
        func_0201b138();
        func_0201b150(temp_r0, arg0, sp0);
        func_0201b1b4();
    }
    func_0201d1b0(0, -1, temp_r0);
}
