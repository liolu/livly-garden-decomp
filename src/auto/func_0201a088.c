#include "m2c.h"

M2C_UNK func_02019f80(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0212caf2;

void func_0201a088(void) {
    *(s32 *) 0x04000000 &= ~0x40000000;
    func_02019f80(&data_0212caf2);
}
