#include "m2c.h"

s32 func_0200669c();                                /* extern */
extern M2C_UNK data_02125a44;

u16 func_02007100(void) {
    if (func_0200669c() != 0) {
        return 0U;
    }
    return M2C_FIELD(&data_02125a44, u16 *, 4);
}
