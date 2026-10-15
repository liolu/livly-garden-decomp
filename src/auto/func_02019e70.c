#include "m2c.h"

M2C_UNK func_02019e14(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0212caf2;

void func_02019e70(void) {
    *(s32 *) 0x04000000 &= ~0x40000000;
    func_02019e14(&data_0212caf2);
}
