#include "m2c.h"

M2C_UNK func_0201fd94();                            /* extern */
M2C_UNK func_0201fea0(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_0201feec(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_0212ec18;
extern M2C_UNK func_0202487c;

void func_02024544(void) {
    if (M2C_FIELD(&data_0212ec18, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_0212ec18, u16 *, 0)    = 1U;
    M2C_FIELD(&data_0212ec18, s32 *, 0xC)  = 0;
    M2C_FIELD(&data_0212ec18, s32 *, 0x10) = 0;
    M2C_FIELD(&data_0212ec18, s32 *, 0x28) = 0;
    M2C_FIELD(&data_0212ec18, s32 *, 0x14) = 0;
    M2C_FIELD(&data_0212ec18, s32 *, 0x18) = 0;
    func_0201fd94();
    do {

    } while (func_0201feec(5, 1) == 0);
    func_0201fea0(5, &func_0202487c);
}
