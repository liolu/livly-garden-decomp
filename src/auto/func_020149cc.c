#include "m2c.h"

M2C_UNK func_02014a6c(void *);                      /* extern */
M2C_UNK func_0201ec78(u8);                          /* extern */
M2C_UNK func_0201ed00(u8, s32);                     /* extern */

void func_020149cc(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C) == 2) {
        func_0201ed00(M2C_FIELD(arg0, u8 *, 0x3C), 0xFFFFFD2D);
    }
    func_0201ec78(M2C_FIELD(arg0, u8 *, 0x3C));
    func_02014a6c(arg0);
}
