#include "m2c.h"

M2C_UNK func_020200b0(void *, s32);                 /* extern */
s32 func_0202010c(void *, s32);                     /* extern */
s32 func_02020ce8(s32);                             /* extern */
M2C_UNK func_02020efc();                            /* extern */

s32 func_02020f90(void *arg0) {
    func_020200b0(arg0, func_0202010c(arg0, M2C_FIELD(arg0, s32 *, 0x10)));
    if (func_02020ce8(M2C_FIELD(arg0, s32 *, 8)) != 0) {
        func_02020efc();
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        return 1;
    }
    return 0;
}
