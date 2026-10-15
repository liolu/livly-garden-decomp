#include "m2c.h"

extern void *data_0212bc30;

void func_02015ae0(s32 arg0, s32 arg1) {
    M2C_FIELD((M2C_FIELD(data_0212bc30, s32 *, 0x84) + (arg0 * 0x10)), s32 *, 0x14) = arg1;
}
