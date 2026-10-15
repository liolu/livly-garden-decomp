#include "m2c.h"

s32 func_0200db64(void *arg0, u32 arg1) {
    void *temp_r2;
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0x1C);
    if (arg1 < (u32) M2C_FIELD(temp_r3, u16 *, 0)) {
        temp_r2                     = M2C_FIELD(temp_r3, s32 *, 0xC) + (arg1 * 8);
        M2C_FIELD(arg0, void **, 0) = temp_r2;
        if (M2C_FIELD(temp_r2, u16 *, 4) != 0) {
            M2C_FIELD(arg0, void **, 4) = temp_r2;
        }
        return 1;
    }
    return 0;
}
