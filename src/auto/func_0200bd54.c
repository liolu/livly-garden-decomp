#include "m2c.h"

M2C_UNK func_02013568(void *, s32, s32, s32, s32);  /* extern */
s32 func_0201a420();                                /* extern */
s32 func_0201a474();                                /* extern */
s32 func_0201a4c8();                                /* extern */
s32 func_0201a558();                                /* extern */

s32 func_0200bd54(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_02013568(arg0, arg1 + (arg2 << 6), arg3, arg4, 8);
    M2C_FIELD(arg0, s32 *, 0x20) = arg2;
    if ((arg1 == func_0201a420()) || (arg1 == func_0201a474()) || (arg1 == func_0201a4c8()) || (arg1 == func_0201a558())) {
        M2C_FIELD(arg0, s8 *, 0x26) = 0;
    } else {
        M2C_FIELD(arg0, s8 *, 0x26) = 1;
    }
    return arg3 * arg4;
}
