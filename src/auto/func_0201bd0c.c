#include "m2c.h"

extern M2C_UNK data_0212cba0;

s32 func_0201bd0c(void) {
    return M2C_FIELD(&data_0212cba0, s32 *, 0x20) = (s32) (M2C_FIELD(&data_0212cba0, s32 *, 0x20) + 1);
}
