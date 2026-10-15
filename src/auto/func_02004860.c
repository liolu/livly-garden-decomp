#include "m2c.h"

extern M2C_UNK data_0204d942;

s16 func_02004860(s32 arg0) {
    return *((u16 *) ((s8 *) &data_0204d942 + (arg0 * 0xBC)));
}
