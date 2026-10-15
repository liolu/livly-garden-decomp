#include "m2c.h"

extern M2C_UNK data_02053da8;

void func_020037fc(s32 arg0, s32 arg1) {
    s32 var_r1;

    var_r1 = arg1;
    if (var_r1 < 0) {
        var_r1 = 0;
    }
    if (var_r1 > 0x63) {
        var_r1 = 0x63;
    }
    ((s8 *) &data_02053da8)[arg0] = (s8) var_r1;
}
