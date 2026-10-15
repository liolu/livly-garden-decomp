#include "m2c.h"

M2C_UNK func_02009794(M2C_UNK, M2C_UNK);            /* extern */
extern M2C_UNK data_021262ec;

void func_02009a10(void *arg0) {
    s32 temp_r0;

    temp_r0 = (s32) (M2C_FIELD(arg0, u16 *, 0x3C) & 0xF000) >> 0xC;
    switch (temp_r0) {                              /* irregular */
        case 1:
            *(s32 *) 0x040004C0 =
                0x42108000 | (u16) (M2C_FIELD(&data_021262ec, s32 *, 4) | (M2C_FIELD(&data_021262ec, s32 *, 0x14) << 5) |
                                    (M2C_FIELD(&data_021262ec, s32 *, 0x10) << 0xA));
            return;
        case 13:
            func_02009794(0, 0x1F);
            return;
        case 14:
            func_02009794(0, 0x1F);
            return;
        case 15:
            func_02009794(0, 0x1F);
            return;
    }
}
