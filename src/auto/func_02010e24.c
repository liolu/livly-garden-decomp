#include "m2c.h"

void *func_02010940(M2C_UNK *);                     /* extern */
M2C_UNK func_02010cec(M2C_UNK, u16, s32, M2C_UNK, s32); /* extern */
extern M2C_UNK data_02045d7c;
extern s32 data_02128604;

void func_02010e24(M2C_UNK arg0, s32 arg1, s32 arg2, M2C_UNK arg3, s32 arg4) {
    func_02010cec(arg0, M2C_FIELD(func_02010940(&data_02045d7c), u16 *, 4), data_02128604, arg3, arg4);
}
