#include "m2c.h"

extern M2C_UNK data_02053d98;

void func_02003768(u32 arg0, s32 arg1) {
    u32 temp_r2;
    u32 temp_r3;

    if (arg0 > 0x7FU) {
        return;
    }
    if (arg1 == 0) {
        temp_r3 = arg0 >> 5;
        *((M2C_UNK *) ((s8 *) &data_02053d98 + (temp_r3 * 4))) =
            *((M2C_UNK *) ((s8 *) &data_02053d98 + (temp_r3 * 4))) | (1 << (arg0 & 0x1F));
        return;
    }
    temp_r2 = arg0 >> 5;
    *((M2C_UNK *) ((s8 *) &data_02053d98 + (temp_r2 * 4))) =
        *((M2C_UNK *) ((s8 *) &data_02053d98 + (temp_r2 * 4))) & ~(1 << (arg0 & 0x1F));
}
