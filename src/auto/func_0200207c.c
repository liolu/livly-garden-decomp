#include "m2c.h"

M2C_UNK func_020021a4();                            /* extern */
M2C_UNK func_0200224c();                            /* extern */
M2C_UNK func_020022b4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_02002350(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK data_0204d830;

void func_0200207c(void) {
    M2C_FIELD(&data_0204d830, s16 *, 0x18) = 0;
    M2C_FIELD(&data_0204d830, s16 *, 0x16) = 0;
    M2C_FIELD(&data_0204d830, s16 *, 4)    = 0;
    M2C_FIELD(&data_0204d830, s16 *, 0x1C) = 0;
    M2C_FIELD(&data_0204d830, s16 *, 8)    = 0;
    M2C_FIELD(&data_0204d830, s16 *, 0x12) = 0;
    M2C_FIELD(&data_0204d830, s16 *, 0xE)  = 0;
    M2C_FIELD(&data_0204d830, s16 *, 0x1E) = 0;
    M2C_FIELD(&data_0204d830, s32 *, 0x3C) = 0;
    M2C_FIELD(&data_0204d830, s32 *, 0x38) = 0;
    M2C_FIELD(&data_0204d830, s32 *, 0x34) = 0;
    M2C_FIELD(&data_0204d830, s32 *, 0x30) = 0;
    func_020021a4();
    func_0200224c();
    func_020022b4(0, 0, 0x80, 0x60, 0, 0x1000);
    func_02002350(0, 0, 0x80, 0x60, 0, 0x1000);
}
