#include "m2c.h"

M2C_UNK func_02026d20(M2C_UNK, M2C_UNK);            /* extern */
s32 func_02026d90(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02026ed8();                                /* extern */

s32 func_0202792c(M2C_UNK arg0) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_02026ed8();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02026d20(1, arg0);
    var_r0 = func_02026d90(1, 0);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
