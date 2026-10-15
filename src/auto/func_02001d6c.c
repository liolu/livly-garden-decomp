#include "m2c.h"

M2C_UNK func_02001d90();                            /* extern */

s32 func_02001d6c(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 8) == 0) {
        return;
    }
    func_02001d90();
    return M2C_FIELD(arg0, s32 *, 8) = 0;
}
