#include "m2c.h"

extern M2C_UNK data_0204d898;

void func_02004104(s32 arg0, s32 arg1) {
    s32 var_r1;

    var_r1 = arg1;
    if (var_r1 > 0xF) {
        var_r1 = 0xF;
    }
    if (var_r1 < 1) {
        var_r1 = 1;
    }
    M2C_FIELD(((arg0 * 0xC4) + M2C_FIELD(&data_0204d898, s32 *, 8)), s16 *, 0xA) = (s16) var_r1;
}
