#include "m2c.h"

s32 func_0200a4c8(void *arg0) {
    s32 temp_r2;

    temp_r2                      = M2C_FIELD(arg0, s32 *, 0xA0);
    M2C_FIELD(arg0, s32 *, 0xA0) = 0;
    return temp_r2;
}
