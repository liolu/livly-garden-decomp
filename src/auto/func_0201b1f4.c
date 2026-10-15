#include "m2c.h"

s32 func_02019f58();                                /* extern */
extern M2C_UNK data_0212cb00;

void func_0201b1f4(void) {
    M2C_FIELD(&data_0212cb00, s32 *, 0x18) = func_02019f58();
}
