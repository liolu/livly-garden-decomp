#include "m2c.h"

extern M2C_UNK data_0205396e;

s16 func_020050e4(s32 arg0) {
    return *((u16 *) ((s8 *) &data_0205396e + (arg0 * 6)));
}
