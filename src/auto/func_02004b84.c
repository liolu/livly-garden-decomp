#include "m2c.h"

extern M2C_UNK data_0204d95a;

s16 func_02004b84(s32 arg0) {
    return *((u16 *) ((s8 *) &data_0204d95a + (arg0 * 0xBC)));
}
