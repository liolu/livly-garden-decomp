#include "m2c.h"

s32 func_0201cd9c(M2C_UNK);                         /* extern */
s32 func_0201ce80(M2C_UNK);                         /* extern */
M2C_UNK func_0201cf28(M2C_UNK, s32);                /* extern */
M2C_UNK func_0201cf3c(M2C_UNK, s32);                /* extern */
extern s32 data_0212ce1c;

void func_0201cc04(void) {
    if (data_0212ce1c != 0) {
        return;
    }
    data_0212ce1c = 1;
    func_0201cf28(0, func_0201cd9c(0));
    func_0201cf3c(0, func_0201ce80(0));
    func_0201cf3c(2, 0);
    func_0201cf28(2, 0);
    func_0201cf28(3, func_0201cd9c(3));
    func_0201cf3c(3, func_0201ce80(3));
    func_0201cf28(4, func_0201cd9c(4));
    func_0201cf3c(4, func_0201ce80(4));
    func_0201cf28(5, func_0201cd9c(5));
    func_0201cf3c(5, func_0201ce80(5));
    func_0201cf28(6, func_0201cd9c(6));
    func_0201cf3c(6, func_0201ce80(6));
}
