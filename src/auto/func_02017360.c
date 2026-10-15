#include "m2c.h"

M2C_UNK func_02014e94(void *);                      /* extern */
M2C_UNK func_020173f8(void *);                      /* extern */
M2C_UNK func_0201c8d4(M2C_UNK *);                   /* extern */
M2C_UNK func_0201c958(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0212bc70;
extern M2C_UNK data_0212c2e8;

void func_02017360(void *arg0) {
    func_0201c8d4(&data_0212c2e8);
    if (M2C_FIELD(&data_0212bc70, s32 *, 4) != 0) {
        func_0201c8d4(M2C_FIELD(&data_0212bc70, s32 *, 4) + 0x4C8);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1E) >> 0x1F) != 0) {
        func_02014e94(arg0);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1F) >> 0x1F) != 0) {
        M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x170)(arg0);
    }
    func_020173f8(arg0);
    func_0201c958(&data_0212c2e8);
    if (M2C_FIELD(&data_0212bc70, s32 *, 4) == 0) {
        return;
    }
    func_0201c958(M2C_FIELD(&data_0212bc70, s32 *, 4) + 0x4C8);
}
