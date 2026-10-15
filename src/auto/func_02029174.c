#include "m2c.h"

M2C_UNK func_0201bb90();                            /* extern */
M2C_UNK func_0201ddac(s32);                         /* extern */

void func_02029174(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) == 0) {
        func_0201bb90(arg0);
    }
    func_0201ddac(M2C_FIELD(arg1, s32 *, 4));
}
