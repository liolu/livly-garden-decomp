#include "m2c.h"

M2C_UNK func_0201c284(s32);                         /* extern */
M2C_UNK func_0201c58c(void *, M2C_UNK (*)(s32));    /* extern */
M2C_UNK func_0201c65c(void *);                      /* extern */
extern M2C_UNK data_0212cba0;

void func_0201c228(void *arg0, s32 arg1) {
    if (M2C_FIELD(&data_0212cba0, s32 *, 0x1C) != 0) {
        func_0201c58c(arg0, func_0201c284);
        M2C_FIELD(arg0, s32 *, 4)    = arg1;
        M2C_FIELD(arg0, s32 *, 0)    = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x80);
        M2C_FIELD(arg0, s32 *, 0x64) = 1;
        func_0201c65c(arg0);
        return;
    }
    func_0201c284(arg1);
}
