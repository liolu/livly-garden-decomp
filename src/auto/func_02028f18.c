#include "m2c.h"

M2C_UNK CpuSet(s32 *, M2C_UNK *, s32);              /* extern */
s16 func_0201bc5c();                                /* extern */
extern M2C_UNK data_02130000;
extern M2C_UNK data_02130004;

void func_02028f18(void) {
    s32 sp0;

    sp0 = 0;
    CpuSet(&sp0, &data_02130004, 0x05000001);
    M2C_FIELD(&data_02130000, s16 *, 6) = func_0201bc5c();
}
