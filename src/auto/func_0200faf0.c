#include "m2c.h"

M2C_UNK func_0201e4e4(M2C_UNK, void *, M2C_UNK);    /* extern */
extern M2C_UNK func_0200f060;
extern M2C_UNK func_0200f174;
extern M2C_UNK func_0200f1f8;
extern M2C_UNK func_0200f3e4;

void func_0200faf0(void *arg0) {
    func_0201e4e4(0, arg0, 0x48);
    M2C_FIELD(arg0, s32 *, 0x10)      = 1;
    M2C_FIELD(arg0, s32 *, 0x14)      = 3;
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &func_0200f060;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &func_0200f174;
    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &func_0200f1f8;
    M2C_FIELD(arg0, M2C_UNK **, 0x24) = &func_0200f3e4;
}
