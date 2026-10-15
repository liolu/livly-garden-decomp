#include "engine.h"
#include "m2c.h"

void func_0201d1b0(M2C_UNK, M2C_UNK, M2C_UNK);

void func_0200ab80(s32 arg0) {
    s32 temp_r2;
    s32 temp_r2_2;

    M2C_FIELD(arg0, s32 *, 0) = 0;
    temp_r2                   = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_r2 != 0) {
        func_0201d1b0(0, -1, temp_r2);
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
    }
    temp_r2_2 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_r2_2 == 0) {
        return;
    }
    func_0201d1b0(0, -1, temp_r2_2);
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
}
