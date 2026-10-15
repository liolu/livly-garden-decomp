#include "m2c.h"

extern M2C_UNK data_0204d898;

void func_02004094(s32 arg0, s8 arg1) {
    *(s8 *) (M2C_FIELD(&data_0204d898, s32 *, 8) + (arg0 * 0xC4)) = arg1;
}