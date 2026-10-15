#include "m2c.h"

extern M2C_UNK data_02053a9a;

void func_02005228(s32 arg0, s32 arg1) {
    s32 var_r1;

    var_r1 = arg1;
    if (var_r1 > 0x63) {
        var_r1 = 0x63;
    }
    if (var_r1 < 0) {
        var_r1 = 0;
    }
    *((u16 *) ((s8 *) &data_02053a9a + (arg0 * 6))) = (s16) var_r1;
}
