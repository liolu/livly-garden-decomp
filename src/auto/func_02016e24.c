#include "m2c.h"

s32 func_02016da8();                                /* extern */
M2C_UNK func_02016e04(M2C_UNK);                     /* extern */

s32 func_02016e24(M2C_UNK arg0) {
    if (func_02016da8() == 0) {
        return 0;
    }
    func_02016e04(arg0);
    return 1;
}
