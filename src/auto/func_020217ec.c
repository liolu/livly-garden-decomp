#include "m2c.h"

M2C_UNK func_02021604(M2C_UNK *);                   /* extern */
s32 func_0202162c(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

s32 func_020217ec(M2C_UNK arg0, M2C_UNK arg1) {
    u8 sp0[72];

    func_02021604(sp0);
    if (func_0202162c(sp0, arg1, arg0, 0) != 0) {
        return 1;
    }
    return 0;
}
