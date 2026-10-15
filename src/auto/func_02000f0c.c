#include "m2c.h"

extern M2C_UNK data_0204aebc;

s32 func_02000f0c(s32 arg0) {
    if (*((M2C_UNK *) ((s8 *) &data_0204aebc + (arg0 * 0x1C))) != 0) {
        return 1;
    }
    return 0;
}
