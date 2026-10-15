#include "m2c.h"

extern M2C_UNK data_0212ece0;

s32 func_02025768(void) {
    if (!(M2C_FIELD(&data_0212ece0, s32 *, 0x114) & 4)) {
        return 1;
    }
    return 0;
}
