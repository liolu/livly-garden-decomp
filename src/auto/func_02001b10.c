#include "m2c.h"

M2C_UNK func_02018e78(M2C_UNK, u16);                /* extern */
M2C_UNK func_0201b754(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0201b898(M2C_UNK);                     /* extern */

void func_02001b10(M2C_UNK arg0) {
    u16 temp_r1;

    func_0201b754(1, arg0);
    func_0201b898(1);
    temp_r1             = *(u16 *) 0x04000208;
    *(u16 *) 0x04000208 = 1;
    func_02018e78(1, temp_r1);
}
