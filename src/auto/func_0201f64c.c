#include "m2c.h"

s32 func_0201f5d4();                                /* extern */
s32 func_0201f610();                                /* extern */

s32 func_0201f64c(void) {
    s32 temp_r4;

    temp_r4 = func_0201f5d4();
    return (0x100 - temp_r4) - func_0201f610();
}
