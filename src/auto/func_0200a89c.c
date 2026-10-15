#include "m2c.h"

M2C_UNK func_0200a7f8(void *, s32);                 /* extern */

void func_0200a89c(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) != 1) {
        return;
    }
    M2C_FIELD(arg1, s32 *, 0) = 0;
    func_0200a7f8(arg1, M2C_FIELD(arg1, s32 *, 0xC));
}
