#include "m2c.h"

extern M2C_UNK data_0204d9d4;

void func_02004e2c(s32 arg0, s32 arg1) {
    s32 var_r1;

    var_r1 = arg1;
    if (var_r1 > 0xFF) {
        var_r1 = 0xFF;
    }
    if (var_r1 < -0xFF) {
        var_r1 = -0xFF;
    }
    *((M2C_UNK *) ((s8 *) &data_0204d9d4 + (arg0 * 0xBC))) = var_r1;
}
