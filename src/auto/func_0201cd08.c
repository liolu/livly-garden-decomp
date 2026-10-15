#include "m2c.h"

s32 func_0201c6a8();                                /* extern */
s32 func_0201cd9c(M2C_UNK);                         /* extern */
s32 func_0201ce80(M2C_UNK);                         /* extern */
M2C_UNK func_0201cf28(M2C_UNK, s32);                /* extern */
M2C_UNK func_0201cf3c(M2C_UNK, s32);                /* extern */
M2C_UNK func_0201d570(s32);                         /* extern */
M2C_UNK func_0201d578(s32);                         /* extern */
extern M2C_UNK data_0212ce1c;

void func_0201cd08(void) {
    func_0201cf28(2, func_0201cd9c(2));
    func_0201cf3c(2, func_0201ce80(2));
    if ((M2C_FIELD(&data_0212ce1c, s32 *, 4) != 0) && ((func_0201c6a8() & 3) != 1)) {
        return;
    }
    func_0201d570(0x0200002B);
    func_0201d578(0x023E0021);
}
