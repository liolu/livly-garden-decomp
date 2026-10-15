#include "m2c.h"

extern M2C_UNK data_0204d970;

void func_02004cc8(s32 arg0, s32 arg1, u32 arg2) {
    u32 var_r2;

    var_r2 = arg2;
    if (var_r2 > 0x64U) {
        var_r2 = 0x64;
    }
    *(s8 *) (arg1 + ((arg0 * 0xBC) + (s32) &data_0204d970)) = (s8) var_r2;
}