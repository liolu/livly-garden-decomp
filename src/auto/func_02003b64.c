#include "m2c.h"

extern M2C_UNK data_0204d898;

s32 func_02003b64(void) {
    return M2C_FIELD(&data_0204d898, s32 *, 4) + 4;
}
