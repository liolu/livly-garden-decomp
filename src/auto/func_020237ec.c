#include "m2c.h"

M2C_UNK WaitByLoop(M2C_UNK);                        /* extern */
M2C_UNK func_0201fd94();                            /* extern */
M2C_UNK func_0201fea0(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_0201feec(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_0212ebec;
extern M2C_UNK func_02023884;

void func_020237ec(void) {
    s32 temp_r1;

    if (M2C_FIELD(&data_0212ebec, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_0212ebec, u16 *, 0)    = 1U;
    M2C_FIELD(&data_0212ebec, s32 *, 0x1C) = 0;
    M2C_FIELD(&data_0212ebec, s32 *, 0x20) = 0;
    func_0201fd94();
    if (func_0201feec(8, 1) == 0) {
        do {
            WaitByLoop(0x64);
        } while (func_0201feec(8, 1) == 0);
    }
    func_0201fea0(8, &func_02023884);
    temp_r1                             = *(s32 *) 0x027FFC3C;
    M2C_FIELD(&data_0212ebec, s32 *, 8) = temp_r1;
    M2C_FIELD(&data_0212ebec, s32 *, 4) = temp_r1;
}
