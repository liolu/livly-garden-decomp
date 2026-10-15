#include "m2c.h"

extern M2C_UNK data_0205396e;

void func_020050fc(s32 arg0, s32 arg1) {
    s32 var_r1;

    var_r1 = arg1;
    if (var_r1 > 0x63) {
        var_r1 = 0x63;
    }
    if (var_r1 < 0) {
        var_r1 = 0;
    }
    *((u16 *) ((s8 *) &data_0205396e + (arg0 * 6))) = (s16) var_r1;
}
