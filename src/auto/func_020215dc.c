#include "m2c.h"

M2C_UNK func_02021bec();                            /* extern */
extern s32 data_0212eb38;

void func_020215dc(s32 arg0) {
    if (data_0212eb38 != 0) {
        return;
    }
    data_0212eb38 = 1;
    func_02021bec(arg0);
}
