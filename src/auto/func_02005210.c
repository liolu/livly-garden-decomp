#include "m2c.h"

extern M2C_UNK data_02053a9a;

s16 func_02005210(s32 arg0) {
    return *((u16 *) ((s8 *) &data_02053a9a + (arg0 * 6)));
}
