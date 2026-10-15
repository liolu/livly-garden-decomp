#include "m2c.h"

extern M2C_UNK data_021262ec;

void func_0200aeac(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0x8A) = (u16) M2C_FIELD(&data_021262ec, u16 *, 2);
    M2C_FIELD(arg0, s32 *, 0x84) = (s32) (M2C_FIELD(arg0, s32 *, 0x84) & ~2);
}
