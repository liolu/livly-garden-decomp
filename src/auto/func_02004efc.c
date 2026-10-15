#include "m2c.h"

extern M2C_UNK data_0204d9e4;

s32 func_02004efc(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_0204d9e4 + (arg0 * 0xBC)));
}
