#include "m2c.h"

M2C_UNK func_02014c78(void *);                      /* extern */
M2C_UNK func_02017360(void *);                      /* extern */
M2C_UNK func_0201c8d4(M2C_UNK *);                   /* extern */
M2C_UNK func_0201c958(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0212bc70;
extern M2C_UNK data_0212c2e8;

void func_02017644(s32 arg0, s32 arg1, void *arg2) {
    if (arg0 != M2C_FIELD(arg2, s32 *, 0x12C)) {
        return;
    }
    func_0201c8d4(&data_0212c2e8);
    if (M2C_FIELD(&data_0212bc70, s32 *, 4) != 0) {
        func_0201c8d4(M2C_FIELD(&data_0212bc70, s32 *, 4) + 0x4C8);
    }
    func_02017360(arg2);
    M2C_FIELD(arg2, s32 *, 0x12C) = 0;
    M2C_FIELD(arg2, s32 *, 0x130) = 0;
    M2C_FIELD(arg2, s8 *, 0x124)  = 0;
    if ((s32) M2C_FIELD(arg2, s32 *, 0x120) > 0) {
        func_02014c78(arg2);
        M2C_FIELD(arg2, s32 *, 0x120) = 0;
    }
    func_0201c958(&data_0212c2e8);
    if (M2C_FIELD(&data_0212bc70, s32 *, 4) == 0) {
        return;
    }
    func_0201c958(M2C_FIELD(&data_0212bc70, s32 *, 4) + 0x4C8);
}
