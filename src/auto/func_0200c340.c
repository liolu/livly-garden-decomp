#include "m2c.h"

s32 func_0200c3c4();                                /* extern */
s32 func_0200c62c();                                /* extern */
extern M2C_UNK data_0212657c;

s32 func_0200c340(void *arg0) {
    s32 var_r3;
    u16 temp_r1;

    var_r3                              = 0;
    M2C_FIELD(&data_0212657c, s16 *, 8) = 0;
    M2C_FIELD(&data_0212657c, s16 *, 2) = 0;
    if ((s32) M2C_FIELD(&data_0212657c, s16 *, 4) > 0) {
        M2C_FIELD(&data_0212657c, s16 *, 4) = (s16) (M2C_FIELD(&data_0212657c, s16 *, 4) - 1);
        if ((s32) M2C_FIELD(&data_0212657c, s16 *, 4) < 0) {
            M2C_FIELD(&data_0212657c, s16 *, 4) = 0;
        }
        return 1;
    }
    temp_r1 = M2C_FIELD(arg0, u16 *, 0x1C);
    switch (temp_r1) {                              /* irregular */
        case 0:
            var_r3 = func_0200c3c4(arg0);
            break;
        case 1:
            var_r3 = func_0200c62c(arg0);
            break;
    }
    if (var_r3 == 2) {
        M2C_FIELD(&data_0212657c, s16 *, 0xC) = 0;
    }
    return var_r3;
}
