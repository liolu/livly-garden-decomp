#include "m2c.h"

M2C_UNK func_0201cb0c(s32, M2C_UNK);                /* extern */
M2C_UNK func_0201e608(s32, s32, M2C_UNK);           /* extern */
void *func_02026eac();                              /* extern */
s32 func_02026ebc();                                /* extern */

s32 func_020274f8(s32 arg0) {
    s32 temp_r0;
    void *temp_r4;

    temp_r4 = func_02026eac();
    temp_r0 = func_02026ebc();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    if (arg0 == 0) {
        return 6;
    }
    func_0201cb0c(M2C_FIELD(temp_r4, s32 *, 4), 0x7D0);
    func_0201e608(M2C_FIELD(temp_r4, s32 *, 4), arg0, 0x7D0);
    return 0;
}
