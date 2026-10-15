#include "m2c.h"

M2C_UNK func_02014fc0(void *);                      /* extern */
M2C_UNK func_0201ed80(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
M2C_UNK func_0201f330(M2C_UNK);                     /* extern */
M2C_UNK func_0201f4ec(s32);                         /* extern */
s32 func_0201f558();                                /* extern */
M2C_UNK func_02024488(void *);                      /* extern */
M2C_UNK func_020244a0(void *);                      /* extern */

void func_02014f4c(void *arg0) {
    s32 temp_r5;

    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F) != 0) {
        func_0201ed80(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
        func_02024488(arg0 + 8);
        func_020244a0(arg0 + 0x14);
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~2);
        temp_r5                      = func_0201f558();
        func_0201f330(1);
        func_0201f4ec(temp_r5);
    }
    func_02014fc0(arg0);
}
