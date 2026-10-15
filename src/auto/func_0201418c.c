#include "m2c.h"

M2C_UNK func_0201ee44(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_0212ac80;

void func_0201418c(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    func_0201ee44(arg0, 0);
    M2C_FIELD(&data_0212ac80, s32 *, 8) = (s32) (M2C_FIELD(&data_0212ac80, s32 *, 8) & ~arg0);
}
