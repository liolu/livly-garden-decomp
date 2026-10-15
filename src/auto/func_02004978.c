#include "m2c.h"

extern M2C_UNK data_0204d950;

void func_02004978(s32 arg0, s32 arg1) {
    s32 var_r1;

    var_r1 = arg1;
    if (var_r1 < 0) {
        var_r1 = 0;
    }
    if (var_r1 > 0xF423F) {
        var_r1 = 0xF423F;
    }
    *((M2C_UNK *) ((s8 *) &data_0204d950 + (arg0 * 0xBC))) = var_r1;
}
