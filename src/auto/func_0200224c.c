#include "m2c.h"

extern M2C_UNK data_0204d830;

void func_0200224c(void) {
    M2C_FIELD((void *) 0x04000028, s32 *, 0)    = (s32) M2C_FIELD(&data_0204d830, s32 *, 0x3C);
    M2C_FIELD((void *) 0x04000028, s32 *, 4)    = (s32) M2C_FIELD(&data_0204d830, s32 *, 0x38);
    M2C_FIELD((void *) 0x04000028, s32 *, 0x10) = (s32) M2C_FIELD(&data_0204d830, s32 *, 0x34);
    M2C_FIELD((void *) 0x04000028, s32 *, 0x14) = (s32) M2C_FIELD(&data_0204d830, s32 *, 0x30);
}
