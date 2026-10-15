#include "m2c.h"

s32 func_02023a64(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *, s32 *); /* extern */
extern M2C_UNK (*data_0204bd98)();
extern M2C_UNK func_020237b0;

s32 func_02023ae8(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 sp4;
    s32 temp_r0;

    temp_r0 = func_02023a64(arg0, arg1, arg2, &func_020237b0, &sp4);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    data_0204bd98();
    return sp4;
}
