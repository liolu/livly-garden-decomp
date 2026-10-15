#include "m2c.h"

extern M2C_UNK data_02053804;

s32 func_02004f2c(s32 arg0) {
    if (arg0 >= 0xB) {
        return 0;
    }
    return *((M2C_UNK *) ((s8 *) &data_02053804 + (arg0 * 0x14)));
}
