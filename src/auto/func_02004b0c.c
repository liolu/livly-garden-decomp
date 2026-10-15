#include "m2c.h"

extern M2C_UNK data_0204d956;

void func_02004b0c(s32 arg0, s32 arg1) {
    s32 var_r1;

    var_r1 = arg1;
    if (var_r1 < 0) {
        var_r1 = 0;
    }
    if (var_r1 > 0x3E8) {
        var_r1 = 0x3E8;
    }
    *((u16 *) ((s8 *) &data_0204d956 + (arg0 * 0xBC))) = (s16) var_r1;
}
