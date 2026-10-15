#include "m2c.h"

extern M2C_UNK data_0204d9c8;

void func_02004d40(s32 arg0, s32 arg1) {
    s32 var_r1;

    var_r1 = arg1;
    if (var_r1 < 0) {
        var_r1 = 0;
    }
    if (var_r1 > 0x270F) {
        var_r1 = 0x270F;
    }
    *((M2C_UNK *) ((s8 *) &data_0204d9c8 + (arg0 * 0xBC))) = var_r1;
}
