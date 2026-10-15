#include "m2c.h"

M2C_UNK func_02023a64(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_020244b8();                            /* extern */
extern M2C_UNK *data_0204bd98;
extern M2C_UNK func_02023754;

void func_02023c80(M2C_UNK arg0, s32 arg1) {
    M2C_UNK *temp_r4;

    temp_r4       = data_0204bd98;
    data_0204bd98 = &func_02023754;
    func_020244b8();
    data_0204bd98 = temp_r4;
    func_02023a64(0xE, 0, 0, arg0, arg1);
}
