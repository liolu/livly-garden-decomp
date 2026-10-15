#include "m2c.h"

extern M2C_UNK data_02053970;

s16 func_020050a4(s32 arg0) {
    return *((u16 *) ((s8 *) &data_02053970 + (arg0 * 6)));
}
