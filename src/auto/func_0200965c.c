#include "m2c.h"

M2C_UNK func_0200abe8(M2C_UNK);                     /* extern */
M2C_UNK func_0200b778(M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32, s32, M2C_UNK *); /* extern */
extern M2C_UNK func_02007a54;

void func_0200965c(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, M2C_UNK arg3, s32 arg4, s32 arg5) {
    s32 var_r8;

    var_r8 = 0xD4;
    if (arg5 == 0) {
        var_r8 = 0;
    }
    func_0200abe8(arg1);
    func_0200b778(arg0, arg1, arg3, arg4, var_r8 + arg2, arg2 + 0x35, arg2 + 0x6A, arg2 + 0x9F, arg5, &func_02007a54);
}
