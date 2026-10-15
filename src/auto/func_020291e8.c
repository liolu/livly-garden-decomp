#include "m2c.h"

M2C_UNK func_0201d55c(M2C_UNK, M2C_UNK);            /* extern */
s32 func_0201dd98();                                /* extern */
M2C_UNK func_0201ddac(s32);                         /* extern */
s32 func_02028f50();                                /* extern */
extern s32 data_02130000;

void func_020291e8(s32 arg0) {
    M2C_UNK var_r1;
    s32 temp_r4;

    temp_r4       = func_0201dd98();
    data_02130000 = arg0;
    if (func_02028f50() == 0) {
        if (arg0 != 0) {
            var_r1 = 0x1000;
        } else {
            var_r1 = 0x5000;
        }
        func_0201d55c(0xF000, var_r1);
    }
    func_0201ddac(temp_r4);
}
