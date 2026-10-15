#include "m2c.h"

M2C_UNK func_0200dda0(void *);                      /* extern */
M2C_UNK func_0200ec84(void *, M2C_UNK);             /* extern */
M2C_UNK func_0200ede8(void *, M2C_UNK);             /* extern */

void func_0200edac(void *arg0, M2C_UNK arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x34) = arg2;
    M2C_FIELD(arg0, s32 *, 0x38) = -1;
    func_0200ec84(arg0 + 0x3C, 1);
    func_0200dda0(arg0);
    func_0200ede8(arg0, arg1);
}
