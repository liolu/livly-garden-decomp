#include "m2c.h"

extern M2C_UNK data_02053bc4;

s16 func_020052cc(s32 arg0) {
    return *((u16 *) ((s8 *) &data_02053bc4 + (arg0 * 4)));
}
