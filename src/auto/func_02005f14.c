#include "m2c.h"

extern M2C_UNK data_02053efc;

u16 func_02005f14(void) {
    return M2C_FIELD(&data_02053efc, u16 *, 0x76);
}
