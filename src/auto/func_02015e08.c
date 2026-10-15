#include "m2c.h"

M2C_UNK func_0200cef4(s32, M2C_UNK);                /* extern */
s32 func_02015e3c(s32 *);                           /* extern */

s32 func_02015e08(s32 *arg0, s32 arg1) {
    func_0200cef4(((s8 *) arg0 + 4), 0xC);
    *arg0 = arg1;
    if (func_02015e3c(arg0) != 0) {
        return 1;
    }
    return 0;
}
