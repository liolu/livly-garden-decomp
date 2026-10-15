#include "m2c.h"

s32 func_02000fdc();                                /* extern */
s32 func_020010d4(s32);                             /* extern */
s32 func_02001580(s32);                             /* extern */

s32 func_0200103c(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_02000fdc();
    switch (temp_r0) {                              /* irregular */
        case 1:
            return func_02001580(arg0);
        case 2:
            return func_020010d4(arg0);
        default:
            return arg0;
    }
}
