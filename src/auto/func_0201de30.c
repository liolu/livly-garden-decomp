#include "m2c.h"

M2C_UNK func_0201fd94();                            /* extern */
M2C_UNK func_0201fea0(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_0201feec(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_0212cf28;
extern M2C_UNK func_0201de84;

void func_0201de30(void) {
    if (M2C_FIELD(&data_0212cf28, u16 *, 2) != 0) {
        return;
    }
    M2C_FIELD(&data_0212cf28, u16 *, 2) = 1U;
    func_0201fd94();
    do {

    } while (func_0201feec(0xC, 1) == 0);
    func_0201fea0(0xC, &func_0201de84);
}
