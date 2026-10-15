#include "m2c.h"

extern M2C_UNK data_0212ebec;

s32 func_020236a4(void) {
    if (M2C_FIELD(&data_0212ebec, s32 *, 0x1C) != 0) {
        return 0;
    }
    M2C_FIELD(&data_0212ebec, s32 *, 0x1C) = 1;
    return 1;
}
