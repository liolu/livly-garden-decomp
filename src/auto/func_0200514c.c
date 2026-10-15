#include "m2c.h"

extern M2C_UNK data_02053a22;

s16 func_0200514c(s32 arg0) {
    return *((u16 *) ((s8 *) &data_02053a22 + (arg0 * 4)));
}
