#include "m2c.h"

extern M2C_UNK data_0204d8fc;

void func_02003884(s32 arg0) {
    s32 var_r0;

    var_r0 = arg0;
    if (var_r0 > 5) {
        var_r0 = 5;
    }
    if (var_r0 < 0) {
        var_r0 = 0;
    }
    M2C_FIELD(&data_0204d8fc, s8 *, 0x24) = (s8) var_r0;
}
