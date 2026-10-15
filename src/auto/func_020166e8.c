#include "m2c.h"

M2C_UNK func_0201ef38(s32, s32);                    /* extern */
M2C_UNK func_0201fd24(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_0201fd58(M2C_UNK, M2C_UNK);                /* extern */

void func_020166e8(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    if (arg0 == func_0201fd58(arg2, arg3)) {
        func_0201fd24(arg2, arg3, 0);
    }
    func_0201ef38(arg0, arg0 + arg1);
}
