#include "m2c.h"

M2C_UNK func_020152fc();                            /* extern */
M2C_UNK func_0201ed80(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0201f330(M2C_UNK);                     /* extern */
M2C_UNK func_0201f4ec(s32);                         /* extern */
s32 func_0201f558();                                /* extern */

void func_02014100(void) {
    s32 temp_r4;

    func_020152fc();
    func_0201ed80(0, 0, 0, 0);
    temp_r4 = func_0201f558();
    func_0201f330(1);
    func_0201f4ec(temp_r4);
}
