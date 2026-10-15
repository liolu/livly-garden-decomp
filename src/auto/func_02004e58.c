#include "m2c.h"

extern M2C_UNK data_0204d9d8;

s32 func_02004e58(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_0204d9d8 + (arg0 * 0xBC)));
}
