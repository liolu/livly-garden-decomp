#include "m2c.h"

M2C_UNK func_0200d6b4(s32);                         /* extern */
s32 func_0200d8b4(M2C_UNK, s32);                    /* extern */

s32 func_0200d650(M2C_UNK arg0, s32 *arg1) {
    s32 temp_r0;

    temp_r0 = func_0200d8b4(arg0, 0x4345424B);
    if (temp_r0 == 0) {
        *arg1 = 0;
        return 0;
    }
    func_0200d6b4(temp_r0 + 8);
    *arg1 = temp_r0 + 8;
    return 1;
}
