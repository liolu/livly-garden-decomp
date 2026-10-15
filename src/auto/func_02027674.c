#include "m2c.h"

s32 func_02026ebc();                                /* extern */

u16 func_02027674(void) {
    if (func_02026ebc() != 0) {
        return 0x8000U;
    }
    return *(u16 *) 0x027FFCFA;
}
