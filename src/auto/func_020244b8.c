#include "m2c.h"

M2C_UNK func_0201de08(s32);                         /* extern */
s32 func_02023c4c(M2C_UNK, M2C_UNK);                /* extern */
s32 func_0202433c(M2C_UNK);                         /* extern */
s32 func_0202435c();                                /* extern */

void func_020244b8(void) {
    func_0201de08(0x360000);
    if (func_0202435c() == 1) {
        return;
    }
    if (func_02023c4c(2, 0) != 0) {
        do {
            func_0201de08(0xA3A47);
        } while (func_02023c4c(2, 0) != 0);
    }
    if (func_0202433c(1) != 0) {
        return;
    }
    do {
        func_0201de08(0xA);
    } while (func_0202433c(1) == 0);
}
