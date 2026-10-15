#include "m2c.h"

extern M2C_UNK data_0204aec8;

s32 func_02000f30(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_0204aec8 + (arg0 * 0x1C)));
}
