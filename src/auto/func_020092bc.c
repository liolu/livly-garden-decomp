#include "m2c.h"

extern M2C_UNK data_02125a4c;

u16 func_020092bc(u32 arg0) {
    if (arg0 >= 0x1CU) {
        return 0U;
    }
    return *((u16 *) ((s8 *) &data_02125a4c + (arg0 * 2)));
}
