#include "m2c.h"

extern M2C_UNK data_020538e0;

void func_02005028(s32 arg0, s16 arg1) {
    *((u16 *) ((s8 *) &data_020538e0 + (arg0 * 4))) = arg1;
}
