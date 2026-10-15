#include "m2c.h"

extern M2C_UNK data_0204d954;

s16 func_02004ab4(s32 arg0) {
    return *((u16 *) ((s8 *) &data_0204d954 + (arg0 * 0xBC)));
}
