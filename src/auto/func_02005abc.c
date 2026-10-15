#include "m2c.h"

extern M2C_UNK data_02053c90;

void func_02005abc(s32 arg0, s32 arg1) {
    s32 var_r1;

    var_r1 = arg1;
    if (arg0 >= 0x17) {
        return;
    }
    if (var_r1 > 0x63) {
        var_r1 = 0x63;
    }
    ((s8 *) &data_02053c90)[arg0] = (s8) var_r1;
}
