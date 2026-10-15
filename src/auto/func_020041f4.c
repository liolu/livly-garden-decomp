#include "m2c.h"

extern M2C_UNK data_0204d898;

void func_020041f4(s32 arg0, s32 arg1) {
    s32 var_r1;

    var_r1 = arg1;
    if (var_r1 < 0) {
        var_r1 = 0;
    }
    if (var_r1 > 0x7D0) {
        var_r1 = 0x7D0;
    }
    M2C_FIELD(((arg0 * 0xC4) + M2C_FIELD(&data_0204d898, s32 *, 8)), s16 *, 8) = (s16) var_r1;
}
