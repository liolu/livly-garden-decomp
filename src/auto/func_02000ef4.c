#include "m2c.h"

extern M2C_UNK data_0204c080;

void func_02000ef4(s32 arg0) {
    M2C_FIELD(&data_0204c080, s32 *, 0xC) = arg0;
    M2C_FIELD(&data_0204c080, s32 *, 8)   = 2;
}
