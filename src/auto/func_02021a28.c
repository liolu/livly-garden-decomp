#include "engine.h"
#include "m2c.h"

M2C_UNK func_0201dd98(void);
void func_0201ddac(M2C_UNK);

void func_02021a28(s32 arg0) {
    s32 temp_r0;
    s32 var_r1;
    void *temp_r2;

    temp_r0 = func_0201dd98();
    if (M2C_FIELD(arg0, volatile s32 *, 0xC) & 1) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    if (var_r1 != 0) {
        M2C_FIELD(arg0, volatile s32 *, 0xC)     = (s32) (M2C_FIELD(arg0, volatile s32 *, 0xC) | 2);
        temp_r2                                  = M2C_FIELD(arg0, void **, 8);
        M2C_FIELD(temp_r2, volatile s32 *, 0x1C) = (s32) (M2C_FIELD(temp_r2, volatile s32 *, 0x1C) | 0x20);
    }
    func_0201ddac(temp_r0);
}
