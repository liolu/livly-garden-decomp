#include "m2c.h"

extern M2C_UNK data_0204d898;

s16 func_02003bc0(s32 arg0) {
    return M2C_FIELD((M2C_FIELD(&data_0204d898, s32 *, 4) + (arg0 * 2)), s16 *, 0x1A);
}
