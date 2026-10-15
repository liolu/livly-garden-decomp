#include "m2c.h"

extern M2C_UNK data_0204d898;

void func_02003c68(s32 arg0) {
    s32 var_r0;

    var_r0 = arg0;
    if (var_r0 > 0x64) {
        var_r0 = 0x64;
    }
    if (var_r0 < 0) {
        var_r0 = 0;
    }
    M2C_FIELD(M2C_FIELD(&data_0204d898, void **, 4), s32 *, 0x2C) = var_r0;
}
