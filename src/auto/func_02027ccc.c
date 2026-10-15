#include "m2c.h"

M2C_UNK func_02026d20(M2C_UNK, M2C_UNK);            /* extern */
s32 func_02026d90(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02026f20(M2C_UNK, M2C_UNK);                /* extern */

s32 func_02027ccc(M2C_UNK arg0) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_02026f20(1, 5);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02026d20(0xB, arg0);
    var_r0 = func_02026d90(0xB, 0);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
