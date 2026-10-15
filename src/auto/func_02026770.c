#include "m2c.h"

M2C_UNK func_0201c318(M2C_UNK);                     /* extern */
M2C_UNK func_0201cb0c(s32 *, M2C_UNK);              /* extern */
M2C_UNK func_0201cb44(s32 *, M2C_UNK);              /* extern */
M2C_UNK func_0201cb68();                            /* extern */
s32 func_0201dd98();                                /* extern */
M2C_UNK func_0201ddac(s32);                         /* extern */
M2C_UNK func_0201de08(M2C_UNK);                     /* extern */
s32 func_0201feec(M2C_UNK, M2C_UNK);                /* extern */
s32 func_0201ff10(M2C_UNK, s32 *, M2C_UNK);         /* extern */

s32 func_02026770(void *arg0, s32 *arg1, s32 arg2) {
    s32 sp0;
    s32 *temp_r8;
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r8_2;

    sp0 = arg2;
    if (!(M2C_FIELD(arg0, volatile s32 *, 0x114) & 2)) {
        M2C_FIELD(arg0, volatile s32 *, 0x114) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x114) | 2);
        if (func_0201feec(0xB, 1) == 0) {
            do {
                func_0201de08(0x64);
            } while (func_0201feec(0xB, 1) == 0);
        }
        func_02026770(arg0, NULL, 1);
    }
    func_0201cb44(M2C_FIELD(arg0, s32 **, 0), 0x60);
    func_0201cb68();
loop_6:
    M2C_FIELD(arg0, s32 **, 4)             = arg1;
    M2C_FIELD(arg0, volatile s32 *, 0x114) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x114) | 0x20);
    do {

    } while (func_0201ff10(0xB, arg1, 1) < 0);
    if (arg1 == NULL) {
        temp_r8 = M2C_FIELD(arg0, s32 **, 0);
        do {

        } while (func_0201ff10(0xB, temp_r8, 1) < 0);
    }
    temp_r8_2 = func_0201dd98();
    if (M2C_FIELD(arg0, volatile s32 *, 0x114) & 0x20) {
        do {
            func_0201c318(0);
        } while (M2C_FIELD(arg0, volatile s32 *, 0x114) & 0x20);
    }
    func_0201ddac(temp_r8_2);
    func_0201cb0c(M2C_FIELD(arg0, s32 **, 0), 0x60);
    temp_r1 = *M2C_FIELD(arg0, s32 **, 0);
    if (temp_r1 == 4) {
        temp_r0 = sp0 - 1;
        sp0     = temp_r0;
        if (temp_r0 > 0) {
            goto loop_6;
        }
    }
    if (temp_r1 == 0) {
        return 1;
    }
    return 0;
}
