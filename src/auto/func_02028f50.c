#include "m2c.h"

s32 func_02028f78();                                /* extern */
s32 func_02028f90();                                /* extern */

s32 func_02028f50(void) {
    if ((func_02028f90() != 0) && (func_02028f78() == 0)) {
        return 1;
    }
    return 0;
}
