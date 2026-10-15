#include "m2c.h"

M2C_UNK func_02019f80(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0212cafc;

void func_0201a184(void) {
    *(s32 *) 0x04001000 &= ~0x80000000;
    func_02019f80(&data_0212cafc);
}
