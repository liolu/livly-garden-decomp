#include "m2c.h"

extern M2C_UNK data_020557fc;

void func_02006488(u32 arg0) {
    u32 var_r0;

    var_r0 = arg0;
    if (var_r0 > 0x3E8U) {
        var_r0 = 0x3E9;
    }
    M2C_FIELD(&data_020557fc, s16 *, 0xA0) = (s16) var_r0;
}
