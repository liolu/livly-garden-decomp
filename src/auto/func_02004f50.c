#include "m2c.h"

extern M2C_UNK data_02053804;

void func_02004f50(s32 arg0, s32 arg1) {
    if (arg0 >= 0xB) {
        return;
    }
    *((M2C_UNK *) ((s8 *) &data_02053804 + (arg0 * 0x14))) = arg1;
}
