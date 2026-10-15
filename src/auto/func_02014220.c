#include "m2c.h"

extern M2C_UNK data_0212ac80;

void func_02014220(s32 arg0) {
    M2C_FIELD(&data_0212ac80, s32 *, 4) = (s32) (M2C_FIELD(&data_0212ac80, s32 *, 4) & ~(1 << arg0));
}
