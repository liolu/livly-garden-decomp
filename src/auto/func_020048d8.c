#include "m2c.h"

extern M2C_UNK data_0204d948;

s32 func_020048d8(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_0204d948 + (arg0 * 0xBC)));
}
