#include "m2c.h"

extern M2C_UNK data_02053a98;

s16 func_020051a0(s32 arg0) {
    return *((u16 *) ((s8 *) &data_02053a98 + (arg0 * 6)));
}
