#include "m2c.h"

s32 func_020025bc(M2C_UNK *, s32, s32, M2C_UNK);    /* extern */
s32 func_020029d4(M2C_UNK *, s32);                  /* extern */
M2C_UNK func_02003640();                            /* extern */
M2C_UNK func_02024620(M2C_UNK *);                   /* extern */
M2C_UNK func_020246cc(M2C_UNK *);                   /* extern */
M2C_UNK func_0202515c(M2C_UNK *, M2C_UNK *);        /* extern */
extern s32 data_0204b7f4;
extern M2C_UNK data_0204d898;
extern M2C_UNK data_0204d8a4;
extern M2C_UNK data_0204d8fc;

s32 func_02002ebc(M2C_UNK arg0) {
    u8 spC[16];
    u8 sp0[12];

    func_02024620(spC);
    func_020246cc(sp0);
    func_0202515c(spC, sp0);
    func_02003640();
    if (func_020025bc(&data_0204d8fc, 0x10, 0x7FA4, arg0) == 0) {
        return 0;
    }
    M2C_FIELD(&data_0204d898, s32 *, 0xC)  = (s32) data_0204b7f4;
    M2C_FIELD(&data_0204d898, s32 *, 0x10) = func_020029d4(&data_0204d8fc, 0x7FA4);
    M2C_FIELD(&data_0204d898, s32 *, 0x18) = 0x7FA4;
    if (func_020025bc(&data_0204d8a4, 0, 0x10, arg0) == 0) {
        return 0;
    }
    if (func_020025bc(&data_0204d8fc, 0x7FB4, 0x7FA4, arg0) == 0) {
        return 0;
    }
    M2C_FIELD(&data_0204d898, s32 *, 0x14) = (s32) M2C_FIELD(&data_0204d898, s32 *, 0x10);
    if (func_020025bc(&data_0204d8a4, 0, 0x10, arg0) != 0) {
        return 1;
    }
    return 0;
}
