#include "m2c.h"

M2C_UNK func_02014338(M2C_UNK);                     /* extern */
M2C_UNK func_0201520c();                            /* extern */
M2C_UNK func_02016e68(M2C_UNK);                     /* extern */
M2C_UNK func_0201ed80(s32, s32, s32, M2C_UNK);      /* extern */
M2C_UNK func_0201efc8(M2C_UNK);                     /* extern */
M2C_UNK func_0201f330(M2C_UNK);                     /* extern */
M2C_UNK func_0201f4ec(s32);                         /* extern */
s32 func_0201f558();                                /* extern */

void func_020140ac(void) {
    s32 temp_r4;

    func_02014338(0);
    func_02016e68(0);
    func_0201520c();
    func_0201efc8(0);
    func_0201ed80(0xFFFF, 0xFFFF, 0xFFFF, 0);
    temp_r4 = func_0201f558();
    func_0201f330(1);
    func_0201f4ec(temp_r4);
}
