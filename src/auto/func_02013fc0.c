#include "m2c.h"

M2C_UNK func_02013cd8();                            /* extern */
M2C_UNK func_0201a724();                            /* extern */

void func_02013fc0(void) {
    func_0201a724();
    func_02013cd8();
    *(s32 *) 0x04000600 = (*(s32 *) 0x04000600 & ~0xC0000000) | 0x80000000;
}
