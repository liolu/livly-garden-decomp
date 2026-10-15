#include "m2c.h"

s32 func_0200154c();                                /* extern */
M2C_UNK func_0200162c(M2C_UNK, s32);                /* extern */
M2C_UNK func_0201cb44(s32, s32);                    /* extern */
s32 func_0201d0a8(M2C_UNK, M2C_UNK, s32);           /* extern */

s32 func_02001580(M2C_UNK arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0_2 = func_0200154c();
    temp_r0   = func_0201d0a8(0, -1, temp_r0_2);
    func_0201cb44(temp_r0, temp_r0_2);
    func_0200162c(arg0, temp_r0);
    return temp_r0;
}
