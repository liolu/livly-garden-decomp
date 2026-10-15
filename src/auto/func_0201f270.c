#include "m2c.h"

s32 func_0201f160(M2C_UNK);                         /* extern */
M2C_UNK func_0201f330(M2C_UNK);                     /* extern */
s32 func_0201f64c();                                /* extern */
M2C_UNK func_0201f6ec();                            /* extern */
s32 func_0201f714();                                /* extern */
s32 func_0201f75c();                                /* extern */

s32 func_0201f270(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;

    if (func_0201f75c() == 0) {
        return 0;
    }
    temp_r0_3 = func_0201f714();
    if (temp_r0_3 != 0) {
        return temp_r0_3;
    }
    if (!(arg0 & 1)) {
        return 0;
    }
    if (func_0201f64c() > 0) {
        do {

        } while (func_0201f160(0) != 0);
        temp_r0_2 = func_0201f714();
        if (temp_r0_2 != 0) {
            return temp_r0_2;
        }
        goto block_12;
    }
    func_0201f330(1);
block_12:
    func_0201f6ec();
    do {
        func_0201f160(1);
        temp_r0 = func_0201f714();
    } while (temp_r0 == 0);
    return temp_r0;
}
