#include "m2c.h"

M2C_UNK func_0200d870(s32);                         /* extern */
s32 func_0200d8b4(M2C_UNK, s32);                    /* extern */

s32 func_0200d7e8(M2C_UNK arg0, s32 *arg1) {
    s32 temp_r0;

    temp_r0 = func_0200d8b4(arg0, 0x504C5454);
    if (temp_r0 == 0) {
        *arg1 = 0;
        return 0;
    }
    func_0200d870(temp_r0 + 8);
    *arg1 = temp_r0 + 8;
    return 1;
}
