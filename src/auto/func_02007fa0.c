#include "m2c.h"

s32 func_0200135c(void *, s32, M2C_UNK *);          /* extern */
s32 func_020013ac(void *, s32, M2C_UNK *);          /* extern */
M2C_UNK func_02008190();                            /* extern */
M2C_UNK func_0200a548(s32, s32, s32, s32, void *, M2C_UNK *); /* extern */
M2C_UNK func_0200a590(void *, s32, s32, s32, M2C_UNK *); /* extern */
M2C_UNK func_0200aa74(s32, s32, s32, void *, M2C_UNK *); /* extern */
extern M2C_UNK func_0200758c;

void func_02007fa0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    u32 temp_r4;
    u32 var_r9;

    var_r9 = 0x144;
    func_02008190();
    if (arg4 == 0) {
        var_r9 = 4;
    }
    temp_r4 = arg2 << 5;
    func_0200a548(arg0 + 0xA8, var_r9 + arg1, temp_r4, arg4, arg0, &func_0200758c);
    func_0200a590(arg0 + 0xA8, arg1 + 0x104, temp_r4, arg4, &func_0200758c);
    func_0200aa74(arg1 + 0x44, arg3 << 5, arg4, arg0 + 0x24, &func_0200758c);
    M2C_FIELD(arg0, s32 *, 0x3C) = func_0200135c(arg0 + 0x38, arg1 + 0x84, &func_0200758c);
    M2C_FIELD(arg0, s32 *, 0x44) = func_020013ac(arg0 + 0x40, arg1 + 0xC4, &func_0200758c);
}
