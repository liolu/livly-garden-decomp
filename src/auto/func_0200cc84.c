#include "m2c.h"

M2C_UNK func_0200c074();                            /* extern */
extern M2C_UNK data_0212657c;

void func_0200cc84(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x2C) = (s16) M2C_FIELD(arg0, s16 *, 0x28);
    M2C_FIELD(arg0, s16 *, 0x2E) = (s16) M2C_FIELD(arg0, s16 *, 0x2A);
    if (M2C_FIELD(arg0, s32 *, 0x18) == 0x400) {
        func_0200c074(arg0);
    }
    M2C_FIELD(&data_0212657c, u16 *, 0xC) = (u16) (M2C_FIELD(&data_0212657c, u16 *, 0xC) + 1);
}
