#include "m2c.h"

M2C_UNK func_0201fd94();                            /* extern */
M2C_UNK func_0201fea0(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_0201feec(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_0212ebb0;
extern M2C_UNK func_02022ccc;

void func_02022f4c(void) {
    if (M2C_FIELD(&data_0212ebb0, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_0212ebb0, u16 *, 0) = 1U;
    func_0201fd94();
    M2C_FIELD(&data_0212ebb0, s16 *, 0x10) = 0;
    M2C_FIELD(&data_0212ebb0, s32 *, 4)    = 0;
    M2C_FIELD(&data_0212ebb0, s32 *, 0x14) = 0;
    M2C_FIELD(&data_0212ebb0, s16 *, 0x36) = 0;
    M2C_FIELD(&data_0212ebb0, s16 *, 0x34) = 0;
    M2C_FIELD(&data_0212ebb0, s16 *, 0x3A) = 0;
    M2C_FIELD(&data_0212ebb0, s16 *, 0x38) = 0;
    do {

    } while (func_0201feec(6, 1) == 0);
    func_0201fea0(6, &func_02022ccc);
}
