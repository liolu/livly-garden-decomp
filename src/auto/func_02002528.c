#include "m2c.h"

s32 func_0201bc5c();                                /* extern */
M2C_UNK func_0201e01c();                            /* extern */
s32 func_02025784();                                /* extern */
M2C_UNK func_02026670();                            /* extern */
extern M2C_UNK data_0204d890;

void func_02002528(void) {
    s32 temp_r0;

    if (func_02025784() == 0) {
        func_02026670();
    }
    temp_r0                             = func_0201bc5c();
    M2C_FIELD(&data_0204d890, s32 *, 4) = temp_r0;
    if (temp_r0 != -3) {
        return;
    }
    func_0201e01c();
}
