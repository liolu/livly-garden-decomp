#include "m2c.h"

extern M2C_UNK data_0204d830;

void func_020021f8(void) {
    M2C_FIELD((void *) 0x04001010, s16 *, 0)   = (s16) M2C_FIELD(&data_0204d830, s16 *, 0x14);
    M2C_FIELD((void *) 0x04001010, s16 *, 2)   = (s16) M2C_FIELD(&data_0204d830, s16 *, 0x1A);
    M2C_FIELD((void *) 0x04001010, s16 *, 4)   = (s16) M2C_FIELD(&data_0204d830, s16 *, 0);
    M2C_FIELD((void *) 0x04001010, s16 *, 6)   = (s16) M2C_FIELD(&data_0204d830, s16 *, 6);
    M2C_FIELD((void *) 0x04001010, s16 *, 8)   = (s16) M2C_FIELD(&data_0204d830, s16 *, 0x10);
    M2C_FIELD((void *) 0x04001010, s16 *, 0xA) = (s16) M2C_FIELD(&data_0204d830, s16 *, 0xA);
    M2C_FIELD((void *) 0x04001010, s16 *, 0xC) = (s16) M2C_FIELD(&data_0204d830, s16 *, 2);
    M2C_FIELD((void *) 0x04001010, s16 *, 0xE) = (s16) M2C_FIELD(&data_0204d830, s16 *, 0xC);
}
