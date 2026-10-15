#include "m2c.h"

s32 func_02023a64(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */

s32 func_02023b2c(s32 arg0, M2C_UNK arg1, s32 arg2) {
    s32 var_r0;

    switch (arg0) {                                 /* irregular */
        case 1:
            var_r0 = 1;
            break;
        case 3:
            var_r0 = 2;
            break;
        case 2:
            var_r0 = 3;
            break;
        default:
            var_r0 = 0;
            break;
    }
    if (var_r0 == 0) {
        return 0xFFFF;
    }
    return func_02023a64(var_r0, 0, 0, arg1, arg2);
}
