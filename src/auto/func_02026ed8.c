#include "m2c.h"

M2C_UNK func_0201cb0c(u16 *, M2C_UNK);              /* extern */
s32 func_02026ebc();                                /* extern */
extern M2C_UNK data_0212f560;

s32 func_02026ed8(void) {
    s32 temp_r0;

    temp_r0 = func_02026ebc();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_0201cb0c(M2C_FIELD(M2C_FIELD(&data_0212f560, void **, 4), u16 **, 4), 2);
    if ((u32) *M2C_FIELD(M2C_FIELD(&data_0212f560, void **, 4), u16 **, 4) <= 1U) {
        return 3;
    }
    return 0;
}
