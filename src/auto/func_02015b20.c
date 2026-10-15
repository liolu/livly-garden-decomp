#include "m2c.h"

s32 func_0200d32c(s32, s32, M2C_UNK);               /* extern */
M2C_UNK func_0200d364(s32);                         /* extern */
s32 func_02015e08(u32, s32);                        /* extern */

u32 func_02015b20(s32 arg0, s32 arg1) {
    s32 temp_r0_2;
    u32 temp_r0;
    u32 temp_r1;
    u32 temp_r5;

    temp_r0 = arg0 + arg1;
    temp_r5 = (arg0 + 3) & ~3;
    if (temp_r5 > temp_r0) {
        return 0U;
    }
    temp_r1 = temp_r0 - temp_r5;
    if (temp_r1 < 0x10U) {
        return 0U;
    }
    temp_r0_2 = func_0200d32c(temp_r5 + 0x10, temp_r1 - 0x10, 0);
    if (temp_r0_2 == 0) {
        return 0U;
    }
    if (func_02015e08(temp_r5, temp_r0_2) != 0) {
        return temp_r5;
    }
    func_0200d364(temp_r0_2);
    return 0U;
}
