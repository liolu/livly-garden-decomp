#include "m2c.h"

extern M2C_UNK data_0204d9e0;

s32 func_02004ecc(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_0204d9e0 + (arg0 * 0xBC)));
}
