#include "m2c.h"

extern M2C_UNK data_0204d898;

void func_02004168(s32 arg0, s32 arg1) {
    s32 var_r1;

    var_r1 = arg1;
    if (var_r1 < -0x3E8) {
        var_r1 = -0x3E8;
    }
    if (var_r1 > 0x1388) {
        var_r1 = 0x1388;
    }
    M2C_FIELD(((arg0 * 0xC4) + M2C_FIELD(&data_0204d898, s32 *, 8)), s16 *, 4) = (s16) var_r1;
}
