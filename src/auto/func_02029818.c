#include "m2c.h"

M2C_UNK func_02029864(M2C_UNK);                     /* extern */
M2C_UNK func_0202bb1c();                            /* extern */
extern M2C_UNK data_02130610;

void func_02029818(M2C_UNK arg0) {
    if (M2C_FIELD(&data_02130610, s32 *, 0xC) == 0) {
        func_0202bb1c();
        if (M2C_FIELD(&data_02130610, M2C_UNK(**)(), 4) != NULL) {
            M2C_FIELD(&data_02130610, M2C_UNK(**)(), 4)();
            M2C_FIELD(&data_02130610, M2C_UNK(**)(), 4) = NULL;
        }
    }
    func_02029864(arg0);
}
