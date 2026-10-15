#include "m2c.h"

M2C_UNK func_0200cef4(void *, M2C_UNK);             /* extern */
M2C_UNK func_0201c10c(void *, M2C_UNK *, void *, s32, s32, s32); /* extern */
M2C_UNK func_0201c3d0(void *);                      /* extern */
M2C_UNK func_0201c8bc(void *);                      /* extern */
extern M2C_UNK func_0201831c;

void func_020174b8(void *arg0, s32 arg1) {
    func_0201c10c(arg0, &func_0201831c, arg0, arg0 + 0x4C0, 0x400, arg1);
    func_0200cef4(arg0 + 0x4E0, 0);
    func_0201c8bc(arg0 + 0x4C8);
    M2C_FIELD(arg0, s32 *, 0x4C4) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C0) = 0;
    func_0201c3d0(arg0);
}
