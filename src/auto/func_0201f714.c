#include "engine.h"
#include "m2c.h"

M2C_UNK func_0201dd98(void);
void func_0201ddac(M2C_UNK);

extern M2C_UNK data_0212cf60;

s32 func_0201f714(void) {
    M2C_UNK *temp_r2;
    M2C_UNK *temp_r4;
    s32 temp_r0;

    temp_r0 = func_0201dd98();
    temp_r4 = M2C_FIELD(&data_0212cf60, M2C_UNK **, 0);
    if (temp_r4 == NULL) {
        func_0201ddac(temp_r0);
        return 0;
    }
    temp_r2                                  = *temp_r4;
    M2C_FIELD(&data_0212cf60, M2C_UNK **, 0) = temp_r2;
    if (temp_r2 == NULL) {
        M2C_FIELD(&data_0212cf60, s32 *, 0x10) = 0;
    }
    func_0201ddac(temp_r0);
    return (s32) temp_r4;
}
