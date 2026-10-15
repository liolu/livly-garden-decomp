#include "m2c.h"

M2C_UNK func_02019084(u16);                         /* extern */
extern u16 data_0212cae4;

u16 func_02019e14(u16 *arg0) {
    u16 temp_r4;

    temp_r4 = *arg0;
    *arg0   = 0;
    data_0212cae4 |= temp_r4;
    func_02019084(temp_r4);
    return temp_r4;
}
