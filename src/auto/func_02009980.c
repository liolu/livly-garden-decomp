#include "m2c.h"

M2C_UNK func_02009794(M2C_UNK, M2C_UNK);            /* extern */

void func_02009980(void *arg0) {
    s32 temp_r0;

    temp_r0 = (s32) (M2C_FIELD(arg0, u16 *, 0x3C) & 0xF000) >> 0xC;
    switch (temp_r0) {                              /* irregular */
        case 1:
            *(s32 *) 0x040004C0 = 0x4210D606;
            return;
        case 13:
            func_02009794(0xD, 0x18);
            return;
        case 14:
            func_02009794(0xE, 0x10);
            return;
        case 15:
            func_02009794(0xF, 8);
            return;
    }
}
