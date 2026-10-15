#include "m2c.h"

M2C_UNK func_02013644(M2C_UNK, s32, s32, M2C_UNK, s32, s32); /* extern */

void func_0200bdd4(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    func_02013644(arg1, M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), arg2, M2C_FIELD(arg0, s32 *, 0x20), arg3);
    M2C_FIELD(arg0, s8 *, 0x24) = (s8) arg3;
}
