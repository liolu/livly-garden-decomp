#include "m2c.h"

extern M2C_UNK data_02125a44;

u16 func_020070f0(void) {
    return M2C_FIELD(&data_02125a44, u16 *, 2);
}
