#include "m2c.h"

extern M2C_UNK data_0204d946;

s16 func_02004a84(s32 arg0) {
    return *((u16 *) ((s8 *) &data_0204d946 + (arg0 * 0xBC)));
}
