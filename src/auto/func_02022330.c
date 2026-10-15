#include "m2c.h"

s32 func_02021f1c(M2C_UNK *, M2C_UNK, M2C_UNK);     /* extern */
s32 func_02022018(M2C_UNK *);                       /* extern */
M2C_UNK func_0202213c(M2C_UNK *);                   /* extern */

s32 func_02022330(M2C_UNK arg0, M2C_UNK arg1) {
    u8 sp0[44];

    if ((func_02021f1c(sp0, arg0, arg1) == 0) || (func_02022018(sp0) == 0)) {
        return 0;
    }
    func_0202213c(sp0);
    return 1;
}
