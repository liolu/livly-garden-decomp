#include "m2c.h"

s32 func_02015ab8(M2C_UNK);                         /* extern */
extern M2C_UNK func_02018204;
extern M2C_UNK func_02018278;
extern M2C_UNK func_02018288;
extern M2C_UNK func_020182c0;
extern M2C_UNK func_020182d0;
extern M2C_UNK func_020182f8;
extern M2C_UNK func_020182fc;
extern M2C_UNK func_02018318;

void func_02018184(void *arg0, M2C_UNK arg1) {
    if (func_02015ab8(arg1) == 0) {
        M2C_FIELD(arg0, M2C_UNK **, 0x164) = &func_02018204;
        M2C_FIELD(arg0, M2C_UNK **, 0x168) = &func_02018278;
        M2C_FIELD(arg0, M2C_UNK **, 0x16C) = &func_02018288;
        M2C_FIELD(arg0, M2C_UNK **, 0x170) = &func_020182c0;
        return;
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x164) = &func_020182d0;
    M2C_FIELD(arg0, M2C_UNK **, 0x168) = &func_020182f8;
    M2C_FIELD(arg0, M2C_UNK **, 0x16C) = &func_020182fc;
    M2C_FIELD(arg0, M2C_UNK **, 0x170) = &func_02018318;
}
