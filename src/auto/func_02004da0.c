#include "m2c.h"

extern M2C_UNK data_0204d9cc;

s32 func_02004da0(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_0204d9cc + (arg0 * 0xBC)));
}
