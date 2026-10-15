#include "m2c.h"

extern M2C_UNK data_0205396c;

void func_0200508c(s32 arg0, s16 arg1) {
    *((u16 *) ((s8 *) &data_0205396c + (arg0 * 6))) = arg1;
}
