#include "m2c.h"

M2C_UNK func_0201706c(void *);                      /* extern */
M2C_UNK func_02017494();                            /* extern */
M2C_UNK func_02017518(M2C_UNK *, void *);           /* extern */
extern M2C_UNK data_0212bc70;
extern M2C_UNK data_0212c300;

void func_020173f8(void *arg0) {
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1F) >> 0x1F) == 0) {
        return;
    }
    func_02017494(arg0);
    M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x168)(arg0);
    func_02017518(&data_0212c300, arg0);
    if (M2C_FIELD(&data_0212bc70, s32 *, 4) != 0) {
        func_02017518(M2C_FIELD(&data_0212bc70, s32 *, 4) + 0x4E0, arg0);
    }
    func_0201706c(arg0);
}
