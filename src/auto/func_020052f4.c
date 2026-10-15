#include "m2c.h"

extern M2C_UNK data_02053bc6;

s16 func_020052f4(s32 arg0) {
    return *((u16 *) ((s8 *) &data_02053bc6 + (arg0 * 4)));
}
