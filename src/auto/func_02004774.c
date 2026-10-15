#include "m2c.h"

M2C_UNK func_02003ad0(s32);                         /* extern */
s32 func_02003bc0(s32);                             /* extern */
M2C_UNK func_02003bd8(s32, s32);                    /* extern */
M2C_UNK func_02004674(s32, M2C_UNK);                /* extern */

void func_02004774(s32 arg0) {
    s32 var_r7;
    s32 var_r8;

    func_02004674(arg0, 0);
    var_r7 = 0;
    do {
        func_02003ad0(var_r7);
        var_r8 = 0;
    loop_2:
        if (arg0 == func_02003bc0(var_r8)) {
            func_02003bd8(var_r8, -1);
            if (var_r8 < 2) {
                do {
                    func_02003bd8(var_r8, func_02003bc0(var_r8 + 1));
                    var_r8 += 1;
                } while (var_r8 < 2);
            }
            func_02003bd8(2, -1);
        } else {
            var_r8 += 1;
            if (var_r8 < 3) {
                goto loop_2;
            }
        }
        var_r7 += 1;
    } while (var_r7 < 5);
}
