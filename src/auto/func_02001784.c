#include "m2c.h"

s32 func_0201cd74(M2C_UNK);                         /* extern */
s32 func_0201cd88(M2C_UNK);                         /* extern */
M2C_UNK func_0201cf3c(M2C_UNK, s32);                /* extern */
s32 func_0201cf50(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0201d290(M2C_UNK, s32);                /* extern */
s32 func_0201d2c0(M2C_UNK, s32, s32, M2C_UNK);      /* extern */
s32 func_0201d37c(M2C_UNK, s32, s32);               /* extern */

void func_02001784(void) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r4 = func_0201cd74(0);
    func_0201cf3c(0, func_0201d2c0(0, func_0201cd88(0), temp_r4, 3));
    temp_r0 = func_0201cf50(0, 0x20000, 0x20);
    func_0201d290(0, func_0201d37c(0, temp_r0, temp_r0 + 0x20000));
}
