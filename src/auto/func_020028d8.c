#include "m2c.h"

s32 func_0200271c(void *, s32, s32, M2C_UNK);       /* extern */
s32 func_02002a04(s32, void *, s32);                /* extern */
void *func_0201d0a8(M2C_UNK, M2C_UNK, s32);         /* extern */
M2C_UNK func_0201d1b0(M2C_UNK, M2C_UNK, void *);    /* extern */
extern s32 data_0204b6e8;

s32 func_020028d8(s32 arg0) {
    s32 var_r4;
    void *temp_r0;
    void *temp_r0_2;

    var_r4 = 0;
    if (data_0204b6e8 != 0) {
        temp_r0 = func_0201d0a8(0, -1, 0x10);
        if (func_0200271c(temp_r0, 0, 0x10, 0) != 0) {
            if (M2C_FIELD(temp_r0, s32 *, 0) != arg0) {
                var_r4 = 1;
            } else {
                temp_r0_2 = func_0201d0a8(0, -1, 0x7FA4);
                func_0200271c(temp_r0_2, 0x10, 0x7FA4, 0);
                if (func_02002a04(M2C_FIELD(temp_r0, s32 *, 4), temp_r0_2, 0x7FA4) == 0) {
                    func_0200271c(temp_r0_2, 0x7FB4, 0x7FA4, 0);
                    if (func_02002a04(M2C_FIELD(temp_r0, s32 *, 8), temp_r0_2, 0x7FA4) == 0) {
                        var_r4 = 2;
                    }
                }
                func_0201d1b0(0, -1, temp_r0_2);
            }
        } else {
            var_r4 = 2;
        }
        func_0201d1b0(0, -1, temp_r0);
    }
    return var_r4;
}
