#include "m2c.h"

extern M2C_UNK data_02053808;

u16 func_02004f70(s32 arg0) {
    if (arg0 >= 0xB) {
        return 0U;
    }
    return *((u16 *) ((s8 *) &data_02053808 + (arg0 * 0x14)));
}
