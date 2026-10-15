#include "m2c.h"

extern M2C_UNK data_02053b4c;

void func_02005280(s32 arg0, s16 arg1) {
    *((u16 *) ((s8 *) &data_02053b4c + (arg0 * 4))) = arg1;
}
