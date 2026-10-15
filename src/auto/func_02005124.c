#include "m2c.h"

extern M2C_UNK data_02053a20;

s16 func_02005124(s32 arg0) {
    return *((u16 *) ((s8 *) &data_02053a20 + (arg0 * 4)));
}
