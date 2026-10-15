#include "m2c.h"

extern M2C_UNK data_0204d944;

s16 func_02004890(s32 arg0) {
    return *((u16 *) ((s8 *) &data_0204d944 + (arg0 * 0xBC)));
}
