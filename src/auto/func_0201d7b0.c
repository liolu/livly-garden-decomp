#include "m2c.h"

M2C_UNK func_0201b754(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_0201b898(M2C_UNK);                     /* extern */
M2C_UNK func_0201d794(M2C_UNK);                     /* extern */
extern M2C_UNK data_0212cef8;
extern M2C_UNK func_0201d838;

void func_0201d7b0(void) {
    if (M2C_FIELD(&data_0212cef8, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_0212cef8, u16 *, 0) = 1U;
    func_0201d794(0);
    M2C_FIELD(&data_0212cef8, s32 *, 8)       = 0;
    M2C_FIELD(&data_0212cef8, s32 *, 0xC)     = 0;
    M2C_FIELD((void *) 0x04000102, s16 *, 0)  = 0;
    M2C_FIELD((void *) 0x04000102, s16 *, -2) = 0;
    M2C_FIELD((void *) 0x04000102, s16 *, 0)  = 0xC1;
    func_0201b754(8, &func_0201d838);
    func_0201b898(8);
    M2C_FIELD(&data_0212cef8, s32 *, 4) = 0;
}
