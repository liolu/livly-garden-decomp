#include "m2c.h"

s32 func_020011b4(M2C_UNK, M2C_UNK (*)(M2C_UNK, M2C_UNK *, s32 *)); /* extern */
M2C_UNK func_0201d1b0(M2C_UNK, M2C_UNK, s32);       /* extern */
M2C_UNK func_0201e138(M2C_UNK, s32, M2C_UNK, s32);  /* extern */
M2C_UNK func_0201e300(M2C_UNK);                     /* extern */

void func_020013fc(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK (*arg2)(M2C_UNK, M2C_UNK *, s32 *)) {
    M2C_UNK sp4;
    s32 sp0;
    s32 temp_r0;

    arg2(arg1, &sp4, &sp0);
    temp_r0 = func_020011b4(arg1, arg2);
    if (temp_r0 == 0) {
        return;
    }
    func_0201e300(1);
    func_0201e138(1, temp_r0, arg0, sp0);
    func_0201d1b0(0, -1, temp_r0);
}
