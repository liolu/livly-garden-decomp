#include "m2c.h"

extern M2C_UNK data_0204d958;

s16 func_02004b34(s32 arg0) {
    return *((u16 *) ((s8 *) &data_0204d958 + (arg0 * 0xBC)));
}
