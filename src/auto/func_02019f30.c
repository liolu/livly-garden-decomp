#include "m2c.h"

M2C_UNK func_02019e14(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0212cafa;

void func_02019f30(void) {
    *(s32 *) 0x04001000 &= ~0x40000000;
    func_02019e14(&data_0212cafa);
}
