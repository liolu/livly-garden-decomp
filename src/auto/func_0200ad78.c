#include "m2c.h"

M2C_UNK func_0200fc60(M2C_UNK);                     /* extern */
M2C_UNK func_0200fcc8();                            /* extern */
M2C_UNK func_0200feec();                            /* extern */
M2C_UNK func_0200ff3c(s32, s32, s32);               /* extern */

void func_0200ad78(M2C_UNK arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0200fcc8();
    func_0200ff3c(arg1 << 0xC, arg2 << 0xC, arg3 << 0xC);
    func_0200fc60(arg0);
    func_0200feec();
}
