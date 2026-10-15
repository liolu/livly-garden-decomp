#include "m2c.h"

extern M2C_UNK data_0204d95a;

void func_02004b9c(s32 arg0, s32 arg1) {
    s32 var_r1;

    var_r1 = arg1;
    if (var_r1 < 0) {
        var_r1 = 0;
    }
    if (var_r1 > 0x3E7) {
        var_r1 = 0x3E7;
    }
    *((u16 *) ((s8 *) &data_0204d95a + (arg0 * 0xBC))) = (s16) var_r1;
}
