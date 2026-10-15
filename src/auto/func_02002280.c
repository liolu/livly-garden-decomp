#include "m2c.h"

extern M2C_UNK data_0204d830;

void func_02002280(void) {
    M2C_FIELD((void *) 0x04001028, s32 *, 0)    = (s32) M2C_FIELD(&data_0204d830, s32 *, 0x2C);
    M2C_FIELD((void *) 0x04001028, s32 *, 4)    = (s32) M2C_FIELD(&data_0204d830, s32 *, 0x28);
    M2C_FIELD((void *) 0x04001028, s32 *, 0x10) = (s32) M2C_FIELD(&data_0204d830, s32 *, 0x24);
    M2C_FIELD((void *) 0x04001028, s32 *, 0x14) = (s32) M2C_FIELD(&data_0204d830, s32 *, 0x20);
}
