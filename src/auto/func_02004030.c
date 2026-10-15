#include "m2c.h"

extern M2C_UNK data_0204d898;

void func_02004030(s32 arg0, s32 arg1) {
    M2C_FIELD((M2C_FIELD(&data_0204d898, s32 *, 4) + (arg0 * 0x10)), s32 *, 0x70) = arg1;
}
