#include "m2c.h"

extern M2C_UNK data_0204d898;

u16 func_02003c04(void) {
    return M2C_FIELD(M2C_FIELD(&data_0204d898, void **, 4), u16 *, 0x24);
}
