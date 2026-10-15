#include "m2c.h"

extern M2C_UNK data_02053d10;

s32 func_020036a4(u32 arg0) {
    s32 var_r0;

    if (arg0 > 0x3FU) {
        return 0;
    }
    var_r0 = 1;
    if (!(*((M2C_UNK *) ((s8 *) &data_02053d10 + ((arg0 >> 5) * 4))) & (1 << (arg0 & 0x1F)))) {
        var_r0 = 0;
    }
    return var_r0;
}
