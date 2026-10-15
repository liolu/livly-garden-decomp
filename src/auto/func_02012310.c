#include "m2c.h"

M2C_UNK func_02011968(void *, M2C_UNK);             /* extern */
M2C_UNK func_02011fc8(void *, M2C_UNK);             /* extern */
extern void *data_02128608;

void func_02012310(M2C_UNK arg0) {
    M2C_UNK (*temp_r2)(void *, M2C_UNK);
    M2C_UNK (*temp_r2_2)(void *, M2C_UNK);
    u32 temp_r0;
    void *temp_r4;

    temp_r4 = M2C_FIELD(data_02128608, void **, 0);
    if (M2C_FIELD(temp_r4, s32 *, 0x10) == 0) {
        return;
    }
    M2C_FIELD(data_02128608, s32 *, 0x30) = 1;
    temp_r2                               = M2C_FIELD(temp_r4, M2C_UNK(**)(void *, M2C_UNK), 0x18);
    if (temp_r2 != NULL) {
        temp_r2(data_02128608, arg0);
    }
    if (M2C_FIELD(data_02128608, s32 *, 0x30) != 0) {
        temp_r0 = M2C_FIELD(temp_r4, u32 *, 0x14);
        switch (temp_r0) {
            case 3:
                break;
            default:
                break;
            case 0:
                func_02011fc8(temp_r4, arg0);
                break;
            case 1:
            case 2:
                func_02011968(temp_r4, arg0);
                break;
        }
    }
    temp_r2_2 = M2C_FIELD(temp_r4, M2C_UNK(**)(void *, M2C_UNK), 0x1C);
    if (temp_r2_2 == NULL) {
        return;
    }
    temp_r2_2(data_02128608, arg0);
}
