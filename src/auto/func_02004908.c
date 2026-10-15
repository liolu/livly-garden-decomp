#include "m2c.h"

extern M2C_UNK data_0204d94c;

s16 func_02004908(s32 arg0) {
    return (s16) * ((M2C_UNK *) ((s8 *) &data_0204d94c + (arg0 * 0xBC)));
}
