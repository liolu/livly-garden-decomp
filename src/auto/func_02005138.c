#include "m2c.h"

extern M2C_UNK data_02053a20;

void func_02005138(s32 arg0, s16 arg1) {
    *((u16 *) ((s8 *) &data_02053a20 + (arg0 * 4))) = arg1;
}
