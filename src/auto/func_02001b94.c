#include "m2c.h"

M2C_UNK func_0201b754(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_0201b8c8(M2C_UNK);                     /* extern */
extern M2C_UNK func_02001a98;

void func_02001b94(void) {
    func_0201b754(4, &func_02001a98);
    func_0201b8c8(4);
    *(u16 *) 0x04000004 &= ~0x20;
}
