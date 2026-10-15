#include "m2c.h"

extern M2C_UNK data_02053b4e;

s16 func_02005294(s32 arg0) {
    return *((u16 *) ((s8 *) &data_02053b4e + (arg0 * 4)));
}
