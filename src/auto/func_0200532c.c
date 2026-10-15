#include "m2c.h"

extern M2C_UNK data_02053958;

s16 func_0200532c(s32 arg0) {
    return *((u16 *) ((s8 *) &data_02053958 + (arg0 * 4)));
}
