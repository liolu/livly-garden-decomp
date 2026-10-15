#include "engine.h"
#include "m2c.h"

M2C_UNK func_0201dd98(void);
void func_0201ddac(M2C_UNK);
M2C_UNK func_02025038(void);

extern M2C_UNK data_0212ec18;

s32 func_020245b0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;

    temp_r0 = func_0201dd98();
    if (M2C_FIELD(&data_0212ec18, s32 *, 0xC) != 0) {
        func_0201ddac(temp_r0);
        return 1;
    }
    M2C_FIELD(&data_0212ec18, s32 *, 0xC) = 1;
    func_0201ddac(temp_r0);
    M2C_FIELD(&data_0212ec18, s32 *, 0x20) = 0;
    M2C_FIELD(&data_0212ec18, s32 *, 0x24) = 0;
    M2C_FIELD(&data_0212ec18, s32 *, 0x14) = arg0;
    M2C_FIELD(&data_0212ec18, s32 *, 0x10) = arg1;
    M2C_FIELD(&data_0212ec18, s32 *, 0x1C) = arg2;
    if (func_02025038() != 0) {
        return 0;
    }
    return 3;
}
