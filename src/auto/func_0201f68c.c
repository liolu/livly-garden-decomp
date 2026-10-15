#include "m2c.h"

M2C_UNK func_0201de08(M2C_UNK);                     /* extern */
s32 func_0201f75c();                                /* extern */
M2C_UNK func_0201fea0(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_0201feec(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK func_0201f668;

void func_0201f68c(void) {
    func_0201fea0(7, &func_0201f668);
    if (func_0201f75c() == 0) {
        return;
    }
    if (func_0201feec(7, 1) != 0) {
        return;
    }
    do {
        func_0201de08(0x64);
    } while (func_0201feec(7, 1) == 0);
}
