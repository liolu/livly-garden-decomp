#include "m2c.h"

M2C_UNK func_0201e01c();                            /* extern */
M2C_UNK func_02021d34(M2C_UNK);                     /* extern */
s32 func_02022330(M2C_UNK, s32);                    /* extern */
s32 func_02022384(M2C_UNK, s32);                    /* extern */
extern M2C_UNK data_0204d804;

void func_02001904(s32 arg0) {
    if (M2C_FIELD(&data_0204d804, s32 *, 0x10) != 0) {
        if (func_02022384(0, M2C_FIELD(&data_0204d804, s32 *, 0x14)) != 0) {
            M2C_FIELD(&data_0204d804, s32 *, 0x10) = 0;
        } else {
            func_0201e01c();
        }
    }
    func_02021d34(3);
    if (func_02022330(0, arg0) != 0) {
        M2C_FIELD(&data_0204d804, s32 *, 0x10) = 1;
        M2C_FIELD(&data_0204d804, s32 *, 0x14) = arg0;
        return;
    }
    func_0201e01c();
}
