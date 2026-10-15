#include "m2c.h"

extern M2C_UNK data_0212ebb0;

s32 func_02023690(s32 arg0) {
    return M2C_FIELD(&data_0212ebb0, u16 *, 0x38) & arg0;
}
