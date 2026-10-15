#include "engine.h"
#include "m2c.h"

M2C_UNK func_0201dd98(void);
void func_0201ddac(M2C_UNK);
M2C_UNK func_020236a4(void);
void func_02023dec(M2C_UNK);

extern M2C_UNK data_0212ebec;

s32 func_02023a64(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_r5;

    temp_r5 = func_0201dd98();
    if (func_020236a4() == 0) {
        func_0201ddac(temp_r5);
        return 1;
    }
    M2C_FIELD(&data_0212ebec, s32 *, 0x20) = arg3;
    M2C_FIELD(&data_0212ebec, s32 *, 0x24) = arg4;
    M2C_FIELD(&data_0212ebec, s32 *, 0x28) = arg2;
    func_02023dec((u8) arg0 | 0x02006100);
    func_02023dec(0x01010000 | (u16) arg1);
    func_0201ddac(temp_r5);
    return 0;
}
