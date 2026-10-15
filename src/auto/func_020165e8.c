#include "m2c.h"

s32 func_02015638(s32);                             /* extern */
s32 func_02015ab8(M2C_UNK);                         /* extern */
M2C_UNK func_02015ae0(M2C_UNK, M2C_UNK);            /* extern */
s32 func_0201dd98();                                /* extern */
M2C_UNK func_0201ddac(s32);                         /* extern */

void func_020165e8(s32 arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_r4;
    s32 temp_r5;

    if (arg1 == 0) {
        return;
    }
    temp_r5 = func_0201dd98();
    temp_r4 = func_02015638(arg1);
    if (arg0 == func_02015ab8(arg2)) {
        func_02015ae0(arg2, 0);
    }
    func_02015638(temp_r4);
    func_0201ddac(temp_r5);
}
