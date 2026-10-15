#include "m2c.h"

extern M2C_UNK data_021285dc;

s32 func_020103f8(s32 arg0) {
    return (0x30 * arg0) + M2C_FIELD(&data_021285dc, s32 *, 8);
}
