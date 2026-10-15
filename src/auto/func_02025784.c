#include "m2c.h"

extern M2C_UNK data_0212ece0;

s32 func_02025784(void) {
    if (M2C_FIELD(&data_0212ece0, s32 *, 0x114) != 0) {
        return 1;
    }
    return 0;
}
