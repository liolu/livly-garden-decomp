#include "m2c.h"

void func_0200af10(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x84) = (s32) (M2C_FIELD(arg0, s32 *, 0x84) | 8);
    M2C_FIELD(arg0, s32 *, 0x8C) = arg1;
}
