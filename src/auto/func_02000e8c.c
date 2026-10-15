#include "m2c.h"

M2C_UNK func_0200684c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
extern M2C_UNK data_0204c080;
extern s32 data_020558a8;
extern s32 data_020558ac;
extern s32 data_020558c8;

void func_02000e8c(void) {
    M2C_FIELD(&data_0204c080, s32 *, 4)   = 0x25;
    M2C_FIELD(&data_0204c080, s32 *, 8)   = 0;
    M2C_FIELD(&data_0204c080, s32 *, 0xC) = 0;
    M2C_FIELD(&data_0204c080, s32 *, 0)   = 0;
    data_020558c8                         = 0;
    data_020558ac                         = 0;
    data_020558a8                         = 0;
    func_0200684c(0, 0, 0);
}
