#include "m2c.h"

extern M2C_UNK data_0204d9dc;

s32 func_02004e9c(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_0204d9dc + (arg0 * 0xBC)));
}
