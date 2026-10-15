#include "m2c.h"

extern M2C_UNK data_0204d970;

u8 func_02004cb0(s32 arg0, s32 arg1) {
    return *(s8 *) (arg1 + ((arg0 * 0xBC) + (s32) &data_0204d970));
}