#include "m2c.h"

extern M2C_UNK data_0212635c;

s32 func_0200b2d4(void) {
    s32 var_r0;

    var_r0 = 1;
    if (M2C_FIELD(&data_0212635c, s32 *, 0x10) != 0) {
        var_r0 = 0;
    }
    if (M2C_FIELD(&data_0212635c, s32 *, 0) != 0) {
        var_r0 = 0;
    }
    return var_r0;
}
