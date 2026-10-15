#include "m2c.h"

extern M2C_UNK data_021262ec;

void func_02009748(void) {
    M2C_FIELD((void *) 0x040004C0, s32 *, 0)     = 0x42107FFF;
    M2C_FIELD((void *) 0x040004C0, u32 *, 4)     = (u32) (0x42107FFFU >> 0x10);
    M2C_FIELD((void *) 0x040004C0, s32 *, -0x1C) = (s32) (0x1F00C0 | (M2C_FIELD(&data_021262ec, s32 *, 0xC) << 0x18));
}
