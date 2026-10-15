#include "m2c.h"

M2C_UNK func_0201cb28(s32, M2C_UNK);                /* extern */
M2C_UNK func_0201f064();                            /* extern */
M2C_UNK func_0201f078();                            /* extern */

void func_0201fd24(s32 arg0, s32 arg1, s32 arg2) {
    func_0201f064();
    M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x3C) = arg2;
    func_0201cb28(arg0 + 0x3C + (arg1 * 4), 4);
    func_0201f078();
}
