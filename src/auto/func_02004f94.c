#include "m2c.h"

extern M2C_UNK data_02053808;

void func_02004f94(s32 arg0, s16 arg1) {
    if (arg0 >= 0xB) {
        return;
    }
    *((u16 *) ((s8 *) &data_02053808 + (arg0 * 0x14))) = arg1;
}
