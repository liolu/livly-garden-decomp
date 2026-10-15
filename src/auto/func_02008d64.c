#include "m2c.h"

M2C_UNK func_0200aa74(M2C_UNK, s32, s32, s32, M2C_UNK *); /* extern */
extern M2C_UNK func_02007658;

void func_02008d64(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_UNK var_r0;

    var_r0 = 0x2B;
    if (arg2 != 0) {
        return;
    }
    if (arg3 != 0) {
        var_r0 = 0x2C;
    }
    func_0200aa74(var_r0, (arg1 + 0x120) << 5, arg2, arg0 + 0x1B0, &func_02007658);
}
