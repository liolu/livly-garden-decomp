#include "m2c.h"

M2C_UNK func_0201e01c();                            /* extern */
extern s16 data_02130004;

void func_020294d8(s32 arg0, s32 arg1) {
    if ((arg1 & 0x3F) == 1) {
        data_02130004 = 1;
        return;
    }
    func_0201e01c();
}
