#include "m2c.h"

M2C_UNK func_0200af3c(M2C_UNK);                     /* extern */
u16 *func_0200db9c(M2C_UNK);                        /* extern */
s32 func_0200dba8(M2C_UNK, M2C_UNK);                /* extern */

void func_0200a5b8(M2C_UNK arg0, void *arg1, M2C_UNK arg2) {
    if (func_0200dba8(arg0, arg2) != 0) {
        func_0200af3c(arg0);
        M2C_FIELD(arg1, s32 *, 0) = 1;
    }
    M2C_FIELD(arg1, s32 *, 0xC) = (s32) *func_0200db9c(arg0);
}
