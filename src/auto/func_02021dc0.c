#include "m2c.h"

M2C_UNK func_0201cb0c(s32, s32);                    /* extern */
M2C_UNK func_0201cb80(s32, s32);                    /* extern */
M2C_UNK func_0201e660(s32, M2C_UNK, s32);           /* extern */

void func_02021dc0(void *arg0) {
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;

    temp_r4 = M2C_FIELD(arg0, s32 *, 4);
    temp_r5 = M2C_FIELD(arg0, s32 *, 8);
    temp_r6 = temp_r5 + M2C_FIELD(arg0, s32 *, 0xC);
    func_0201cb80(temp_r4, temp_r6);
    func_0201cb0c(temp_r4, temp_r6);
    func_0201e660(temp_r4 + temp_r5, 0, temp_r6 - temp_r5);
}
