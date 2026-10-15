#include "m2c.h"

M2C_UNK func_020021f8();                            /* extern */
M2C_UNK func_02002280();                            /* extern */
M2C_UNK func_020023ec(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_02002488(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK data_0204d830;

void func_02002110(void) {
    M2C_FIELD(&data_0204d830, s16 *, 0x14) = 0;
    M2C_FIELD(&data_0204d830, s16 *, 0x1A) = 0;
    M2C_FIELD(&data_0204d830, s16 *, 0)    = 0;
    M2C_FIELD(&data_0204d830, s16 *, 6)    = 0;
    M2C_FIELD(&data_0204d830, s16 *, 0x10) = 0;
    M2C_FIELD(&data_0204d830, s16 *, 0xA)  = 0;
    M2C_FIELD(&data_0204d830, s16 *, 2)    = 0;
    M2C_FIELD(&data_0204d830, s16 *, 0xC)  = 0;
    M2C_FIELD(&data_0204d830, s32 *, 0x2C) = 0;
    M2C_FIELD(&data_0204d830, s32 *, 0x28) = 0;
    M2C_FIELD(&data_0204d830, s32 *, 0x24) = 0;
    M2C_FIELD(&data_0204d830, s32 *, 0x20) = 0;
    func_020021f8();
    func_02002280();
    func_020023ec(0, 0, 0x80, 0x60, 0, 0x1000);
    func_02002488(0, 0, 0x80, 0x60, 0, 0x1000);
}
