#include "m2c.h"

M2C_UNK func_0200e5e4(s32);                         /* extern */
M2C_UNK func_0200e864(s32, M2C_UNK, M2C_UNK, s32);  /* extern */
M2C_UNK func_0200e95c(s32, s32, M2C_UNK, M2C_UNK, s32); /* extern */

void func_0200ad1c(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    func_0200e5e4(arg3);
    if (M2C_FIELD(arg0, s32 *, 0x5C) != 0) {
        func_0200e95c(M2C_FIELD(arg0, s32 *, 0x3C), M2C_FIELD(arg0, s32 *, 0x58), arg1, arg2, arg3);
        return;
    }
    func_0200e864(M2C_FIELD(arg0, s32 *, 0x3C), arg1, arg2, arg3);
}
