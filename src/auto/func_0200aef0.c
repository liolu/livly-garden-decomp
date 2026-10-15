#include "m2c.h"

extern u16 data_021262ec;

void func_0200aef0(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0x88) = (u16) data_021262ec;
    M2C_FIELD(arg0, s32 *, 0x84) = (s32) (M2C_FIELD(arg0, s32 *, 0x84) & ~1);
}
