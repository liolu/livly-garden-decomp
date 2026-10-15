#include "m2c.h"

M2C_UNK func_0200107c(s32, M2C_UNK);                /* extern */
s32 func_020011b4(M2C_UNK, M2C_UNK);                /* extern */

void func_02001520(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r0;

    temp_r0 = func_020011b4(arg1, arg2);
    if (temp_r0 == 0) {
        return;
    }
    func_0200107c(temp_r0, arg0);
}
