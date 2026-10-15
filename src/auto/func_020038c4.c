#include "m2c.h"

extern M2C_UNK data_0204d8fc;

void func_020038c4(s32 arg0) {
    s32 var_r0;

    var_r0 = arg0;
    if (var_r0 > 0x3B9AC9FF) {
        var_r0 = 0x3B9AC9FF;
    }
    if (var_r0 < 0) {
        var_r0 = 0;
    }
    M2C_FIELD(&data_0204d8fc, s32 *, 0x28) = var_r0;
}
