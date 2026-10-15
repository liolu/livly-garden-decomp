#include "engine.h"
#include "m2c.h"

M2C_UNK func_0201dd98(void);
void func_0201ddac(M2C_UNK);

extern M2C_UNK data_0212cf60;

s32 func_0201f558(void) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_0201dd98();
    if (M2C_FIELD(&data_0212cf60, s32 *, 8) == 0) {
        var_r4 = M2C_FIELD(&data_0212cf60, s32 *, 4);
    } else {
        var_r4 = M2C_FIELD(&data_0212cf60, s32 *, 0x20);
    }
    func_0201ddac(temp_r0);
    return var_r4;
}
