#include "m2c.h"

s32 func_0200dd78(void *, s32);                     /* extern */
s32 func_0200dd84();                                /* extern */
M2C_UNK func_0200ddf8(void *);                      /* extern */
M2C_UNK func_0200ecbc(void *);                      /* extern */

void func_0200ee00(void *arg0, s32 arg1) {
    s32 temp_r1;

    temp_r1                      = func_0200dd84();
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    if (func_0200dd78(arg0, temp_r1) == 0) {
        func_0200ddf8(arg0);
    }
    func_0200ecbc(arg0);
}
