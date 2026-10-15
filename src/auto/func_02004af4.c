#include "m2c.h"

extern M2C_UNK data_0204d956;

s16 func_02004af4(s32 arg0) {
    return *((u16 *) ((s8 *) &data_0204d956 + (arg0 * 0xBC)));
}
