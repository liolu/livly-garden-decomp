#include "m2c.h"

M2C_UNK func_0201e01c();                            /* extern */
extern s16 data_0212cf28;

void func_0201de84(s32 arg0, s32 arg1) {
    if (((u32) ((arg1 & 0x7F00) << 8) >> 0x10) == 0x10) {
        data_0212cf28 = 1;
        return;
    }
    func_0201e01c();
}
