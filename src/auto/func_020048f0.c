#include "m2c.h"

extern M2C_UNK data_0204d948;

void func_020048f0(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_0204d948 + (arg0 * 0xBC))) = arg1;
}
