#include "engine.h"
#include "m2c.h"

s32 func_0200d0a0(void *, s32);

extern M2C_UNK data_0212ac98;

s32 func_02014408(s32 arg0) {
    s32 var_r1;
    s32 var_r5;

    var_r5 = 0;
    var_r1 = func_0200d0a0(&data_0212ac98, 0);
    if (var_r1 != 0) {
        do {
            if ((M2C_FIELD(var_r1, u16 *, 0x34) == 2) && (M2C_FIELD(var_r1, u16 *, 0x38) == arg0)) {
                var_r5 += 1;
            }
            var_r1 = func_0200d0a0(&data_0212ac98, var_r1);
        } while (var_r1 != 0);
    }
    return var_r5;
}
