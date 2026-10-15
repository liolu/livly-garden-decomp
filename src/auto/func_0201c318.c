#include "m2c.h"

M2C_UNK func_0201bd24(s32, void *);                 /* extern */
M2C_UNK func_0201befc();                            /* extern */
s32 func_0201dd98();                                /* extern */
M2C_UNK func_0201ddac(s32);                         /* extern */
extern M2C_UNK data_0212cba0;

void func_0201c318(s32 arg0) {
    s32 temp_r4;
    void *temp_r5;

    temp_r4 = func_0201dd98();
    temp_r5 = *M2C_FIELD(&data_0212cba0, void ***, 8);
    if (arg0 != 0) {
        M2C_FIELD(temp_r5, s32 *, 0x78) = arg0;
        func_0201bd24(arg0, temp_r5);
    }
    M2C_FIELD(temp_r5, s32 *, 0x64) = 0;
    func_0201befc();
    func_0201ddac(temp_r4);
}
