#include "m2c.h"

extern M2C_UNK data_0204d898;

u8 func_02004078(s32 arg0) {
    return *(s8 *) (M2C_FIELD(&data_0204d898, s32 *, 8) + (arg0 * 0xC4));
}