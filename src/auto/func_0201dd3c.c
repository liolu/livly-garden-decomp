#include "m2c.h"

M2C_UNK func_0201b8c8(M2C_UNK);                     /* extern */
extern M2C_UNK data_0212cf14;

void func_0201dd3c(void) {
    if (M2C_FIELD(&data_0212cf14, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_0212cf14, u16 *, 0)    = 1U;
    M2C_FIELD(&data_0212cf14, s32 *, 0xC)  = 0;
    M2C_FIELD(&data_0212cf14, s32 *, 0x10) = 0;
    func_0201b8c8(4);
    M2C_FIELD(&data_0212cf14, s32 *, 8) = 0;
    M2C_FIELD(&data_0212cf14, s32 *, 4) = 0;
}
