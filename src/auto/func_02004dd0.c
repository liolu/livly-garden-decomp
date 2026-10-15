#include "m2c.h"

extern M2C_UNK data_0204d9d0;

s32 func_02004dd0(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_0204d9d0 + (arg0 * 0xBC)));
}
