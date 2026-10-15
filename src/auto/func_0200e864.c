#include "m2c.h"

M2C_UNK func_0200e604(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_0201acdc(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_0201ad34(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_0201b040();                            /* extern */
M2C_UNK func_0201b088(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_0201b0f4();                            /* extern */
M2C_UNK func_0201b1f4();                            /* extern */
M2C_UNK func_0201b20c(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_0201b270();                            /* extern */
M2C_UNK func_0201b498();                            /* extern */
M2C_UNK func_0201b4cc(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_0201b538();                            /* extern */
M2C_UNK func_0201cb44(s32, s32);                    /* extern */

void func_0200e864(void *arg0, M2C_UNK arg1, s32 arg2, void *arg3) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0xC);
    temp_r5 = M2C_FIELD(arg0, s32 *, 8);
    func_0201cb44(temp_r4, temp_r5);
    switch (arg2) {                                 /* irregular */
        case 1:
            if (M2C_FIELD(arg0, s32 *, 4) != 0) {
                func_0201b040();
                func_0201b088(temp_r4, arg1, temp_r5);
                func_0201b0f4();
            } else {
                func_0201acdc(temp_r4, arg1, temp_r5);
            }
            break;
        case 2:
            if (M2C_FIELD(arg0, s32 *, 4) != 0) {
                func_0201b1f4();
                func_0201b20c(temp_r4, arg1, temp_r5);
                func_0201b270();
            } else {
                func_0201ad34(temp_r4, arg1, temp_r5);
            }
            break;
        case 0:
            func_0201b498();
            func_0201b4cc(temp_r4, arg1, temp_r5);
            func_0201b538();
            break;
    }
    M2C_FIELD(arg3, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(arg3, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 4);
    func_0200e604(arg3, arg2, arg1);
}
