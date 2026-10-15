#include "m2c.h"

extern M2C_UNK data_0204d81c;

void func_02001bd8(void) {
    if (M2C_FIELD(&data_0204d81c, M2C_UNK(**)(), 4) == NULL) {
        return;
    }
    M2C_FIELD(&data_0204d81c, M2C_UNK(**)(), 4)();
}
