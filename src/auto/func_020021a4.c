#include "m2c.h"

extern M2C_UNK data_0204d830;

void func_020021a4(void) {
    M2C_FIELD((void *) 0x04000010, s16 *, 0)   = (s16) M2C_FIELD(&data_0204d830, s16 *, 0x18);
    M2C_FIELD((void *) 0x04000010, s16 *, 2)   = (s16) M2C_FIELD(&data_0204d830, s16 *, 0x16);
    M2C_FIELD((void *) 0x04000010, s16 *, 4)   = (s16) M2C_FIELD(&data_0204d830, s16 *, 4);
    M2C_FIELD((void *) 0x04000010, s16 *, 6)   = (s16) M2C_FIELD(&data_0204d830, s16 *, 0x1C);
    M2C_FIELD((void *) 0x04000010, s16 *, 8)   = (s16) M2C_FIELD(&data_0204d830, s16 *, 8);
    M2C_FIELD((void *) 0x04000010, s16 *, 0xA) = (s16) M2C_FIELD(&data_0204d830, s16 *, 0x12);
    M2C_FIELD((void *) 0x04000010, s16 *, 0xC) = (s16) M2C_FIELD(&data_0204d830, s16 *, 0xE);
    M2C_FIELD((void *) 0x04000010, s16 *, 0xE) = (s16) M2C_FIELD(&data_0204d830, s16 *, 0x1E);
}
