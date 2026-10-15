#include "m2c.h"

s32 func_0201dd98();                                /* extern */
M2C_UNK func_0201ddac(s32);                         /* extern */
void *func_02026eac();                              /* extern */
s32 func_02026ebc();                                /* extern */

s32 func_020273dc(s32 arg0) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r5 = func_0201dd98();
    temp_r0 = func_02026ebc();
    if (temp_r0 != 0) {
        func_0201ddac(temp_r5);
        return temp_r0;
    }
    M2C_FIELD(func_02026eac(), s32 *, 0xC8) = arg0;
    func_0201ddac(temp_r5);
    return 0;
}
