#include "m2c.h"

extern M2C_UNK data_0205396c;

s16 func_02005074(s32 arg0) {
    return *((u16 *) ((s8 *) &data_0205396c + (arg0 * 6)));
}
