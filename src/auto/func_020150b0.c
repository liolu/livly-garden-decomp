#include "m2c.h"

M2C_UNK func_0201ed80(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
M2C_UNK func_0201f330(M2C_UNK);                     /* extern */
M2C_UNK func_0201f4ec(s32);                         /* extern */
s32 func_0201f558();                                /* extern */

void func_020150b0(void *arg0) {
    s32 temp_r4;

    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F) == 0) {
        return;
    }
    func_0201ed80(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
    temp_r4 = func_0201f558();
    func_0201f330(1);
    func_0201f4ec(temp_r4);
}
