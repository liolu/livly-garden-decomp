#include "m2c.h"

s32 func_02001dd0(s32);                             /* extern */
void *func_0201d0a8(M2C_UNK, M2C_UNK, M2C_UNK);     /* extern */

void *func_02001d20(s32 arg0, s32 arg1) {
    void *temp_r0;

    temp_r0                         = func_0201d0a8(0, -1, 0x14);
    M2C_FIELD(temp_r0, s32 *, 0)    = arg0;
    M2C_FIELD(temp_r0, s32 *, 4)    = func_02001dd0(arg1);
    M2C_FIELD(temp_r0, s32 *, 8)    = 1;
    M2C_FIELD(temp_r0, s32 *, 0xC)  = arg1;
    M2C_FIELD(temp_r0, s32 *, 0x10) = 0;
    return temp_r0;
}
