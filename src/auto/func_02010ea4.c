#include "m2c.h"

M2C_UNK func_020109ec(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02010b1c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_02010c2c();                                /* extern */

void func_02010ea4(M2C_UNK arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    if (arg1 != 0) {
        func_020109ec(func_02010c2c(), arg2, arg3);
        return;
    }
    func_02010b1c(arg0, arg2, arg3);
}
