#include "m2c.h"

M2C_UNK func_0200d2ec();                            /* extern */
M2C_UNK func_0200d300(M2C_UNK);                     /* extern */

void func_0200d3a4(M2C_UNK arg0, s32 arg1) {
    if (arg1 & 1) {
        func_0200d2ec();
    }
    if (!(arg1 & 2)) {
        return;
    }
    func_0200d300(arg0);
}
