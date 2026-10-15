#include "m2c.h"

void func_02001db8(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 8) == 0) {
        M2C_FIELD(arg0, s32 *, 0x10) = arg1;
        M2C_FIELD(arg0, s32 *, 8)    = 1;
    }
}
