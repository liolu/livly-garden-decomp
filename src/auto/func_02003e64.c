#include "m2c.h"

extern M2C_UNK data_0204d898;

s32 func_02003e64(u32 arg0) {
    if (arg0 >= 5U) {
        return 0;
    }
    return M2C_FIELD((M2C_FIELD(&data_0204d898, s32 *, 4) + (arg0 * 8)), s32 *, 0x298);
}
