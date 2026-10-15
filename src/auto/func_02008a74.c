#include "m2c.h"

M2C_UNK func_02008b14(s32);                         /* extern */
M2C_UNK func_0200b804(M2C_UNK, s32, s32, M2C_UNK, s32, s32, s32, s32, s32, s32, s32, M2C_UNK *); /* extern */
extern M2C_UNK func_0200758c;

void func_02008a74(M2C_UNK arg0, s32 arg1, s32 arg2, M2C_UNK arg3, s32 arg4, s32 arg5) {
    s32 var_r4;

    var_r4 = 0x205;
    func_02008b14(arg1);
    if (arg5 == 0) {
        var_r4 = 0x1C4;
    }
    func_0200b804(arg0, arg1 + 0x48, arg1 + 0xA8, arg3, arg4, var_r4 + arg2, arg2 + 0x1F8, arg2 + 0x1D1, arg2 + 0x1DE,
                  arg2 + 0x1EB, arg5, &func_0200758c);
}
