#include "m2c.h"

extern M2C_UNK data_0204d9c8;

s16 func_02004d20(s32 arg0) {
    return (s16) * ((M2C_UNK *) ((s8 *) &data_0204d9c8 + (arg0 * 0xBC)));
}
