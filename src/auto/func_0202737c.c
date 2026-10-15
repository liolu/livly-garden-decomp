#include "engine.h"
#include "m2c.h"

M2C_UNK func_0201dd98(void);
void func_0201ddac(M2C_UNK);

extern M2C_UNK data_0212f560;

s32 func_0202737c(void) {
    s32 temp_r0;
    u16 var_r4;

    temp_r0 = func_0201dd98();
    if (M2C_FIELD(&data_0212f560, void **, 4) != NULL) {
        var_r4 = M2C_FIELD(M2C_FIELD(&data_0212f560, void **, 4), u16 *, 0x150);
    } else {
        var_r4 = 0;
    }
    func_0201ddac(temp_r0);
    return (s32) var_r4;
}
