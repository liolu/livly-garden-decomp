#include "m2c.h"

s32 func_0200d3d0(s32, u16);                        /* extern */
M2C_UNK func_0200d420(s32, M2C_UNK);                /* extern */
s32 func_02015e3c(void *);                          /* extern */

s32 func_02015ccc(void *arg0) {
    if (func_0200d3d0(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, u16 *, 0xC)) == 0) {
        return -1;
    }
    if (func_02015e3c(arg0) != 0) {
        return M2C_FIELD(arg0, u16 *, 0xC) - 1;
    }
    func_0200d420(M2C_FIELD(arg0, s32 *, 0), 0);
    return -1;
}
