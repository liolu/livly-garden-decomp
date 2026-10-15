#include "m2c.h"

extern M2C_UNK data_0204d898;

s32 func_02004130(s32 arg0) {
    return M2C_FIELD(((arg0 * 0xC4) + M2C_FIELD(&data_0204d898, s32 *, 8)), s32 *, 0xC);
}
