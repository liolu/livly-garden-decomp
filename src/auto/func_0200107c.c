#include "m2c.h"

s32 func_02000fdc();                                /* extern */
M2C_UNK func_02001114(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_020015c0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0201d1b0(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */

void func_0200107c(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;

    temp_r0 = func_02000fdc();
    switch (temp_r0) {                              /* irregular */
        case 1:
            func_020015c0(arg0, arg1);
            return;
        case 2:
            func_02001114(arg0, arg1);
            return;
        default:
            func_0201d1b0(0, -1, arg0);
            return;
    }
}
