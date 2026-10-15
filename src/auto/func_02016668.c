#include "m2c.h"

M2C_UNK func_020165e8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0201ef18(s32, s32);                    /* extern */
M2C_UNK func_0201fa6c(s32);                         /* extern */

void func_02016668(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    func_020165e8(arg0, arg2, arg3);
    func_0201ef18(arg0, arg0 + arg1);
    func_0201fa6c(arg0);
}
