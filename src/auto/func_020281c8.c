#include "m2c.h"

M2C_UNK func_0201cb0c(s32, M2C_UNK);                /* extern */
M2C_UNK func_02026d20(M2C_UNK, M2C_UNK);            /* extern */
s32 func_02026d90(M2C_UNK, M2C_UNK);                /* extern */
void *func_02026eac();                              /* extern */
s32 func_02026f20(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */

s32 func_020281c8(M2C_UNK arg0) {
    s32 temp_r0;
    s32 var_r0;
    void *temp_r4;

    temp_r4 = func_02026eac();
    temp_r0 = func_02026f20(2, 9, 0xA);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_0201cb0c(M2C_FIELD(temp_r4, void **, 4) + 0xC, 4);
    if (M2C_FIELD(M2C_FIELD(temp_r4, void **, 4), s32 *, 0xC) == 0) {
        return 3;
    }
    func_02026d20(0x10, arg0);
    var_r0 = func_02026d90(0x10, 0);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
