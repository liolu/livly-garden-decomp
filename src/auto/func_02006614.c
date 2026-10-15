#include "m2c.h"

M2C_UNK func_020140a0(M2C_UNK);                     /* extern */
s32 func_0202433c(M2C_UNK);                         /* extern */
extern M2C_UNK data_020558a0;

void func_02006614(void) {
    if (((s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 0xF) != 0) {
        if (M2C_FIELD(&data_020558a0, s32 *, 0xC) != 0) {
            return;
        }
        M2C_FIELD(&data_020558a0, s32 *, 0xC) = 1;
        func_0202433c(0);
        func_020140a0(0);
        return;
    }
    if (M2C_FIELD(&data_020558a0, s32 *, 0xC) != 1) {
        return;
    }
    M2C_FIELD(&data_020558a0, s32 *, 0xC) = 0;
    if (func_0202433c(1) == 0) {
        M2C_FIELD(&data_020558a0, s32 *, 0xC) = 1;
    }
    func_020140a0(0x7F);
}
