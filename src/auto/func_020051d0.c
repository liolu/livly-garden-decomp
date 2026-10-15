#include "m2c.h"

extern M2C_UNK data_02053a9c;

s16 func_020051d0(s32 arg0) {
    return *((u16 *) ((s8 *) &data_02053a9c + (arg0 * 6)));
}
