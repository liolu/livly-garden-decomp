#include "m2c.h"

extern M2C_UNK data_0204d898;

void func_020040cc(s32 arg0, s16 arg1) {
    M2C_FIELD(((arg0 * 0xC4) + M2C_FIELD(&data_0204d898, s32 *, 8)), s16 *, 2) = arg1;
}
