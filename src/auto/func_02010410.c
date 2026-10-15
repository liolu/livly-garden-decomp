#include "m2c.h"

void *func_020103f8();                              /* extern */

void func_02010410(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_r0;

    temp_r0                         = func_020103f8();
    M2C_FIELD(temp_r0, s32 *, 0x24) = -1;
    M2C_FIELD(temp_r0, s32 *, 0x28) = arg1;
    M2C_FIELD(temp_r0, s32 *, 0x2C) = arg2;
}
