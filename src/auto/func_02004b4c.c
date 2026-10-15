#include "m2c.h"

s32 func_02004b84();                                /* extern */
extern M2C_UNK data_0204d958;

void func_02004b4c(s32 arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r4;

    var_r4  = arg1;
    temp_r0 = func_02004b84();
    if (var_r4 < 0) {
        var_r4 = 0;
    }
    if (var_r4 > temp_r0) {
        var_r4 = temp_r0;
    }
    *((u16 *) ((s8 *) &data_0204d958 + (arg0 * 0xBC))) = (s16) var_r4;
}
