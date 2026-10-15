#include "m2c.h"

extern M2C_UNK data_0204d898;

void func_02003e44(u32 arg0, s32 arg1) {
    if (arg0 >= 5U) {
        return;
    }
    M2C_FIELD((M2C_FIELD(&data_0204d898, s32 *, 4) + (arg0 * 8)), s32 *, 0x29C) = arg1;
}
