#include "m2c.h"

M2C_UNK func_02013568(M2C_UNK *, s32, M2C_UNK, M2C_UNK, s32); /* extern */
s32 func_0201a420();                                /* extern */
extern M2C_UNK data_0212657c;
extern M2C_UNK data_02126594;

void func_0200baf8(void) {
    u8 sp4[24];

    func_02013568(sp4, func_0201a420(), 1, 1, 4);
    M2C_FIELD(&data_0212657c, M2C_UNK **, 0x20) = sp4;
    M2C_FIELD(&data_0212657c, M2C_UNK **, 0x24) = &data_02126594;
    M2C_FIELD(&data_0212657c, s32 *, 0x28)      = 0;
    M2C_FIELD(&data_0212657c, s32 *, 0x2C)      = 2;
}
