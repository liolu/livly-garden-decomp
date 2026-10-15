#include "m2c.h"

extern u16 data_0212f560;

s32 func_02026ebc(void) {
    if (data_0212f560 != 0) {
        return 0;
    }
    return 3;
}
