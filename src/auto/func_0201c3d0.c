#include "m2c.h"

M2C_UNK func_0201befc();                            /* extern */
s32 func_0201dd98();                                /* extern */
M2C_UNK func_0201ddac(s32);                         /* extern */

void func_0201c3d0(void *arg0) {
    s32 temp_r4;

    temp_r4                      = func_0201dd98();
    M2C_FIELD(arg0, s32 *, 0x64) = 1;
    func_0201befc();
    func_0201ddac(temp_r4);
}
