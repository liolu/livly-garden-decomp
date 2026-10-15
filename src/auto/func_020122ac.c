#include "m2c.h"

extern void *data_02128608;

void func_020122ac(void) {
    if (M2C_FIELD(M2C_FIELD(data_02128608, void **, 0), s32 *, 0x14) == 0) {
        M2C_FIELD((void *) 0x04000440, s32 *, 0) = 0;
        M2C_FIELD((void *) 0x04000440, s32 *, 8) = 1;
        M2C_FIELD((void *) 0x04000440, s32 *, 0) = 1;
    } else {
        M2C_FIELD(data_02128608, s32 *, 0x10) = 0;
        M2C_FIELD(data_02128608, s32 *, 0x2C) = 0;
        M2C_FIELD(data_02128608, s32 *, 0x28) = 0;
    }
    data_02128608 = NULL;
}
