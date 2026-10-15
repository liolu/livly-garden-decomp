#include "m2c.h"

s32 func_0201c77c(M2C_UNK *, u16 **, M2C_UNK);      /* extern */
M2C_UNK func_0201c820(M2C_UNK *, u16 *, M2C_UNK);   /* extern */
M2C_UNK func_0201cb0c(u16 *, M2C_UNK);              /* extern */
extern M2C_UNK data_0212f568;

u16 *func_02026d38(void) {
    u16 *sp0;

    if (func_0201c77c(&data_0212f568, &sp0, 0) == 0) {
        return NULL;
    }
    func_0201cb0c(sp0, 2);
    if (*sp0 & 0x8000) {
        return sp0;
    }
    func_0201c820(&data_0212f568, sp0, 1);
    return NULL;
}
