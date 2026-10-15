#include "m2c.h"

s32 func_02024e3c(u32);                             /* extern */

s32 func_02024f64(void *arg0, s32 *arg1) {
    s32 temp_r0;
    s32 var_r0;
    u32 temp_r2;

    temp_r2 = M2C_FIELD(arg0, u32 *, 0);
    if (temp_r2 >= 0x18U) {
        return 0;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 4) >= 0x3CU) {
        return 0;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 8) >= 0x3CU) {
        return 0;
    }
    temp_r0 = *arg1;
    if (temp_r2 >= 0xCU) {
        var_r0 = temp_r0 | 0x40;
    } else {
        var_r0 = temp_r0 & ~0x40;
    }
    *arg1 = var_r0;
    *arg1 = (*arg1 & ~0x3F) | (func_02024e3c(M2C_FIELD(arg0, u32 *, 0)) & 0x3F);
    *arg1 = (*arg1 & ~0x7F00) | ((u32) (func_02024e3c(M2C_FIELD(arg0, u32 *, 4)) << 0x19) >> 0x11);
    *arg1 = (*arg1 & ~0x7F0000) | ((u32) (func_02024e3c(M2C_FIELD(arg0, u32 *, 8)) << 0x19) >> 9);
    return 1;
}
