#include "m2c.h"

extern M2C_UNK data_0204d898;

u16 func_020040b0(s32 arg0) {
    return M2C_FIELD(((arg0 * 0xC4) + M2C_FIELD(&data_0204d898, s32 *, 8)), u16 *, 2);
}
