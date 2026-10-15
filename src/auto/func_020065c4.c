#include "m2c.h"

M2C_UNK func_02001c3c();                            /* extern */
M2C_UNK func_020065f0();                            /* extern */
M2C_UNK func_020065f4();                            /* extern */
M2C_UNK func_020066ac();                            /* extern */
M2C_UNK func_020067ec(M2C_UNK);                     /* extern */

void func_020065c4(s32 arg0) {
    func_02001c3c();
    func_020065f0();
    if (arg0 != 0) {
        func_020066ac();
    }
    func_020065f4();
    func_020067ec(-1);
}
