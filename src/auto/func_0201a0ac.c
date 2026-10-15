#include "m2c.h"

M2C_UNK func_02019f80(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0212caf4;

void func_0201a0ac(void) {
    *(s32 *) 0x04000000 &= ~0x80000000;
    func_02019f80(&data_0212caf4);
}
