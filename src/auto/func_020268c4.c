#include "m2c.h"

M2C_UNK func_0201fd94();                            /* extern */
M2C_UNK func_0201fea0(M2C_UNK, M2C_UNK *);          /* extern */
extern M2C_UNK data_0212f540;
extern M2C_UNK func_020268f0;

void func_020268c4(void) {
    func_0201fd94();
    func_0201fea0(0xE, &func_020268f0);
    M2C_FIELD(&data_0212f540, s32 *, 4) = 0;
}
