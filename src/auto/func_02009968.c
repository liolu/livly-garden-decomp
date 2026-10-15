#include "m2c.h"

extern M2C_UNK data_021262ec;

void func_02009968(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(&data_021262ec, s32 *, 4)    = arg0;
    M2C_FIELD(&data_021262ec, s32 *, 0x14) = arg1;
    M2C_FIELD(&data_021262ec, s32 *, 0x10) = arg2;
}
