#include "m2c.h"

s32 func_02015ab8(M2C_UNK);                         /* extern */
M2C_UNK func_0201e71c(s32, s32, M2C_UNK);           /* extern */

s32 func_020182d0(void *arg0, M2C_UNK arg1) {
    s32 temp_r0;

    temp_r0                      = func_02015ab8(arg1);
    M2C_FIELD(arg0, s32 *, 0xA4) = temp_r0;
    func_0201e71c(temp_r0, arg0 + 0xA8, 0x40);
    return 1;
}
