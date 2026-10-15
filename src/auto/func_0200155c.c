#include "m2c.h"

s32 *func_02001548();                               /* extern */

s32 func_0200155c(void) {
    if (*func_02001548() == 0x4341504E) {
        return 1;
    }
    return 0;
}
