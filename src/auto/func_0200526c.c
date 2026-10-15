#include "m2c.h"

extern M2C_UNK data_02053b4c;

s16 func_0200526c(s32 arg0) {
    return *((u16 *) ((s8 *) &data_02053b4c + (arg0 * 4)));
}
