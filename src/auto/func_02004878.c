#include "m2c.h"

extern M2C_UNK data_0204d942;

void func_02004878(s32 arg0, s16 arg1) {
    *((u16 *) ((s8 *) &data_0204d942 + (arg0 * 0xBC))) = arg1;
}
