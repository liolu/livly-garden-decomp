#include "m2c.h"

extern M2C_UNK data_02053a98;

void func_020051b8(s32 arg0, s16 arg1) {
    *((u16 *) ((s8 *) &data_02053a98 + (arg0 * 6))) = arg1;
}
