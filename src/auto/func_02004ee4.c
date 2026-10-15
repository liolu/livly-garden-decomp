#include "m2c.h"

extern M2C_UNK data_0204d9e0;

void func_02004ee4(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_0204d9e0 + (arg0 * 0xBC))) = arg1;
}
