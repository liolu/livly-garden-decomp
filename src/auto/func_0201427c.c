#include "m2c.h"

extern M2C_UNK data_0212b100;

void func_0201427c(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_0212b100 + (arg0 * 0x24))) = arg1;
}
