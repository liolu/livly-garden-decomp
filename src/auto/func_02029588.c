#include "m2c.h"

M2C_UNK func_0201c10c(void *, M2C_UNK *, void *, M2C_UNK *, s32, s32); /* extern */
M2C_UNK func_0201c3d0(void *);                      /* extern */
s32 func_0201dd98();                                /* extern */
M2C_UNK func_0201ddac(s32);                         /* extern */
M2C_UNK func_02029614(M2C_UNK *);                   /* extern */
extern void *data_021301e8;
extern M2C_UNK data_021301ec;
extern M2C_UNK data_02130610;
extern M2C_UNK func_02029628;

void func_02029588(void *arg0) {
    s32 temp_r4;

    temp_r4 = func_0201dd98();
    if (data_021301e8 == NULL) {
        data_021301e8 = arg0;
        func_02029614(arg0 + 0xC4);
        func_02029614(&data_021301ec);
        M2C_FIELD(arg0, s32 *, 0xC0) = 0;
        func_0201c10c(arg0, &func_02029628, arg0, &data_02130610, 0x400, 0x14);
        func_0201c3d0(arg0);
    }
    func_0201ddac(temp_r4);
}
