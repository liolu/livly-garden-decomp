#include "m2c.h"

extern M2C_UNK data_0204d898;

s32 func_02004048(s32 arg0) {
    return M2C_FIELD((M2C_FIELD(&data_0204d898, s32 *, 4) + (arg0 * 0x10)), s32 *, 0x74);
}
