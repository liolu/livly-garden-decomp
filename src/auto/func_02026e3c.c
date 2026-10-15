#include "m2c.h"

M2C_UNK func_0201c6e8(M2C_UNK *, s32, M2C_UNK);     /* extern */
M2C_UNK func_0201cb28(s32, M2C_UNK);                /* extern */
M2C_UNK func_0201e71c(M2C_UNK, s32, M2C_UNK);       /* extern */
s32 func_0201ff10(M2C_UNK, s32, M2C_UNK);           /* extern */
s32 func_02026d38();                                /* extern */
extern M2C_UNK data_0212f568;

s32 func_02026e3c(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r0 = func_02026d38();
    if (temp_r0 == 0) {
        return 8;
    }
    func_0201e71c(arg0, temp_r0, arg1);
    func_0201cb28(temp_r0, arg1);
    temp_r4 = func_0201ff10(0xA, temp_r0, 0);
    func_0201c6e8(&data_0212f568, temp_r0, 1);
    if (temp_r4 < 0) {
        return 8;
    }
    return 2;
}
