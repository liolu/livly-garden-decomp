#include "m2c.h"

s32 func_02023b2c(M2C_UNK, M2C_UNK *, s32 *);       /* extern */
extern M2C_UNK (*data_0204bd98)();
extern M2C_UNK func_020237b0;

s32 func_02023b90(M2C_UNK arg0) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_02023b2c(arg0, &func_020237b0, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    data_0204bd98();
    return sp0;
}
