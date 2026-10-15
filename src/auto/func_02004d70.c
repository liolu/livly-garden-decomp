#include "m2c.h"

extern M2C_UNK data_0204d9c4;

s32 func_02004d70(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_0204d9c4 + (arg0 * 0xBC)));
}
