#include "m2c.h"

s32 func_02004bcc(M2C_UNK, s32);                    /* extern */

s32 func_02004c04(M2C_UNK arg0, s32 arg1) {
    s32 var_r4;

    var_r4 = 0;
loop_1:
    if (arg1 == func_02004bcc(arg0, var_r4)) {
        return 0;
    }
    var_r4 += 1;
    if (var_r4 >= 0xA) {
        return 1;
    }
    goto loop_1;
}
