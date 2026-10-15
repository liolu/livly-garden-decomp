#include "m2c.h"

M2C_UNK func_02006fd8();                            /* extern */
M2C_UNK func_0201e01c();                            /* extern */
s32 func_02022fc4(M2C_UNK *);                       /* extern */
M2C_UNK func_02023058(M2C_UNK *);                   /* extern */
M2C_UNK func_020232cc(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02023678(M2C_UNK);                     /* extern */
s32 func_02023690(M2C_UNK);                         /* extern */

void func_02007000(void) {
    u8 sp0[8];

    if (func_02022fc4(sp0) != 0) {
        func_02023058(sp0);
    }
    func_020232cc(5, 0x1E);
    func_02023678(8);
    if (func_02023690(8) != 0) {
        func_0201e01c();
    }
    func_02006fd8();
}
