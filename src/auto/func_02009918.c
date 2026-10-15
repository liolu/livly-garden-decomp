#include "m2c.h"

M2C_UNK func_0200fa24();                            /* extern */
M2C_UNK func_0200fae0(void *, void *);              /* extern */

void func_02009918(void *arg0, void *arg1, void *arg2) {
    func_0200fa24();
    func_0200fae0(arg0, arg1);
    func_0200fae0(arg0, arg2);
    M2C_FIELD(arg1, s32 *, 0x10) = 1;
    M2C_FIELD(arg2, s32 *, 0x10) = 1;
    M2C_FIELD(arg0, s32 *, 0x80) = -0x800;
    M2C_FIELD(arg0, s32 *, 4)    = 0;
}
