#include "m2c.h"

M2C_UNK func_02013594(M2C_UNK, s32, s32, M2C_UNK, s32, s32, s32, s32); /* extern */

void func_0200bd0c(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, u8 arg4) {
    func_02013594(arg1, M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), arg2, arg3, 0x20, M2C_FIELD(arg0, s32 *, 0x20),
                  (s32) arg4);
    M2C_FIELD(arg0, u8 *, 0x24) = arg4;
}
