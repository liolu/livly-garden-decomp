#include "m2c.h"

M2C_UNK func_02019084();                            /* extern */
extern u16 data_0212cae4;

void func_02019bdc(s32 arg0) {
    data_0212cae4 |= arg0;
    func_02019084(arg0);
}
