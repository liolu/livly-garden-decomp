#include "m2c.h"

extern M2C_UNK data_0212621c;

u16 func_020092a0(u32 arg0) {
    if (arg0 >= 0x67U) {
        return 0U;
    }
    return *((u16 *) ((s8 *) &data_0212621c + (arg0 * 2)));
}
