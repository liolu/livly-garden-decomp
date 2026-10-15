#include "m2c.h"

extern M2C_UNK data_0205409c;

void func_020060c8(s32 arg0, s16 arg1) {
    *((u16 *) ((s8 *) &data_0205409c + (arg0 * 2))) = arg1;
}
