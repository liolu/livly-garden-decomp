#include "m2c.h"

extern s16 data_0204bbf0;
extern M2C_UNK data_0212657c;

void func_0200be08(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x18)           = 0x200;
    M2C_FIELD(arg0, s32 *, 0x20)           = 0;
    M2C_FIELD(arg0, s8 *, 0x24)            = 0;
    M2C_FIELD(arg0, s8 *, 0x25)            = 1;
    M2C_FIELD(arg0, s16 *, 0x28)           = 0;
    M2C_FIELD(arg0, s16 *, 0x2A)           = 0;
    M2C_FIELD(arg0, s16 *, 0x2C)           = 0;
    M2C_FIELD(arg0, s16 *, 0x2E)           = 0;
    M2C_FIELD(arg0, s32 *, 0x30)           = 0;
    M2C_FIELD(&data_0212657c, s32 *, 0x14) = 0;
    M2C_FIELD(&data_0212657c, s8 *, 0)     = 0;
    M2C_FIELD(&data_0212657c, s16 *, 0xE)  = 0;
    M2C_FIELD(&data_0212657c, s16 *, 0xC)  = 0;
    M2C_FIELD(&data_0212657c, s8 *, 1)     = 0;
    data_0204bbf0                          = 2;
    M2C_FIELD(&data_0212657c, s16 *, 8)    = 0;
    M2C_FIELD(&data_0212657c, s16 *, 4)    = 0;
    M2C_FIELD(&data_0212657c, s16 *, 2)    = 0;
}
