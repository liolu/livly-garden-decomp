#include "engine.h"
#include "m2c.h"

M2C_UNK func_02024e3c(M2C_UNK);

s32 func_02024ea4(s32 arg0, s32 arg1) {
    s32 temp_r1_3;
    u32 temp_r0;
    u32 temp_r1;
    u32 temp_r1_2;

    temp_r0 = M2C_FIELD(arg0, u32 *, 0);
    if (temp_r0 >= 0x64U) {
        return 0;
    }
    temp_r1 = M2C_FIELD(arg0, u32 *, 4);
    if ((temp_r1 < 1U) || (temp_r1 > 0xCU)) {
        return 0;
    }
    temp_r1_2 = M2C_FIELD(arg0, u32 *, 8);
    if ((temp_r1_2 < 1U) || (temp_r1_2 > 0x1FU)) {
        return 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC) >= 7) {
        return 0;
    }
    *(M2C_UNK *) arg1 = func_02024e3c((s32) temp_r0);
    *(M2C_UNK *) arg1 =
        (s32) ((*(M2C_UNK *) arg1 & ~0x1F00) | ((u32) (func_02024e3c((s32) M2C_FIELD(arg0, u32 *, 4)) << 0x1B) >> 0x13));
    temp_r1_3 = (*(M2C_UNK *) arg1 & ~0x3F0000) | ((u32) (func_02024e3c((s32) M2C_FIELD(arg0, u32 *, 8)) << 0x1A) >> 0xA);
    *(M2C_UNK *) arg1 = temp_r1_3;
    *(M2C_UNK *) arg1 = (s32) ((temp_r1_3 & ~0x07000000) | ((u32) (M2C_FIELD(arg0, s32 *, 0xC) << 0x1D) >> 5));
    return 1;
}
