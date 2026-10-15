#include "m2c.h"

extern M2C_UNK data_0204d954;

void func_02004acc(s32 arg0, s32 arg1) {
    s32 var_r1;

    var_r1 = arg1;
    if (var_r1 < 0) {
        var_r1 = 0;
    }
    if (var_r1 > 0xA) {
        var_r1 = 0xA;
    }
    *((u16 *) ((s8 *) &data_0204d954 + (arg0 * 0xBC))) = (s16) var_r1;
}
