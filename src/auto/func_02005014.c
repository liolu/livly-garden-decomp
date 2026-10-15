#include "m2c.h"

extern M2C_UNK data_020538e0;

s16 func_02005014(s32 arg0) {
    return *((u16 *) ((s8 *) &data_020538e0 + (arg0 * 4)));
}
