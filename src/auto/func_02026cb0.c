#include "m2c.h"

s32 func_0201dd98();                                /* extern */
M2C_UNK func_0201ddac(s32);                         /* extern */
M2C_UNK func_0201fea0(M2C_UNK, M2C_UNK);            /* extern */
s32 func_02026ebc();                                /* extern */
s32 func_02026f20(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02027360();                            /* extern */
extern M2C_UNK data_0212f560;

s32 func_02026cb0(void) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r4 = func_0201dd98();
    if (func_02026ebc() != 0) {
        func_0201ddac(temp_r4);
        return 3;
    }
    temp_r0 = func_02026f20(1, 0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02027360();
    func_0201fea0(0xA, 0);
    M2C_FIELD(&data_0212f560, s32 *, 4) = 0;
    M2C_FIELD(&data_0212f560, s16 *, 0) = 0;
    func_0201ddac(temp_r4);
    return 0;
}
