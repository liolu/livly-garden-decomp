#include "engine.h"
#include "m2c.h"

void func_0201d1b0(M2C_UNK, M2C_UNK, M2C_UNK);

void func_0200abe8(s32 arg0) {
    s32 temp_r2;
    s32 temp_r2_2;
    s32 temp_r2_3;
    s32 temp_r2_4;

    temp_r2 = M2C_FIELD(arg0, s32 *, 0x48);
    if (temp_r2 != 0) {
        func_0201d1b0(0, -1, temp_r2);
        M2C_FIELD(arg0, s32 *, 0x48) = 0;
    }
    temp_r2_2 = M2C_FIELD(arg0, s32 *, 0x4C);
    if (temp_r2_2 != 0) {
        func_0201d1b0(0, -1, temp_r2_2);
        M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    }
    temp_r2_3 = M2C_FIELD(arg0, s32 *, 0x50);
    if (temp_r2_3 != 0) {
        func_0201d1b0(0, -1, temp_r2_3);
        M2C_FIELD(arg0, s32 *, 0x50) = 0;
    }
    temp_r2_4 = M2C_FIELD(arg0, s32 *, 0x54);
    if (temp_r2_4 == 0) {
        return;
    }
    func_0201d1b0(0, -1, temp_r2_4);
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
}
