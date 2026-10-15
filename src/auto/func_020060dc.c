#include "m2c.h"

extern M2C_UNK data_0205409c;

u16 func_020060dc(s32 arg0) {
    return *((u16 *) ((s8 *) &data_0205409c + (arg0 * 2)));
}
