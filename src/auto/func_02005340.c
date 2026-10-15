#include "m2c.h"

extern M2C_UNK data_02053958;

void func_02005340(s32 arg0, s16 arg1) {
    *((u16 *) ((s8 *) &data_02053958 + (arg0 * 4))) = arg1;
}
