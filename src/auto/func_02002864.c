#include "m2c.h"

M2C_UNK func_02002528();                            /* extern */
M2C_UNK func_02002560();                            /* extern */
s32 func_020256e4();                                /* extern */
M2C_UNK func_020257ec(u16);                         /* extern */
M2C_UNK func_020257fc(u16);                         /* extern */
s32 func_02025ea8(s32);                             /* extern */
extern s32 data_0204b6e8;
extern M2C_UNK data_0204d890;

s32 func_02002864(void) {
    s32 var_r4;

    var_r4 = 0;
    if ((func_020256e4() == 1) && (data_0204b6e8 != 0)) {
        func_02002528();
        func_020257ec((u16) M2C_FIELD(&data_0204d890, s32 *, 4));
        var_r4 = func_02025ea8(data_0204b6e8);
        func_020257fc((u16) M2C_FIELD(&data_0204d890, s32 *, 4));
        func_02002560();
    }
    return var_r4;
}
