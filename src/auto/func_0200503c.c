#include "m2c.h"

extern M2C_UNK data_020538e2;

s16 func_0200503c(s32 arg0) {
    return *((u16 *) ((s8 *) &data_020538e2 + (arg0 * 4)));
}
