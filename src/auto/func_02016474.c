#include "m2c.h"

s32 func_02015650();                                /* extern */
s32 func_02015ab8();                                /* extern */
M2C_UNK func_02015ae0(M2C_UNK, s32);                /* extern */
s32 func_02016290(M2C_UNK, M2C_UNK *, s32, M2C_UNK, s32); /* extern */
extern M2C_UNK func_02016698;

s32 func_02016474(M2C_UNK arg0, s32 arg1, s32 arg2) {
    s32 var_r2;
    s32 var_r4;

    var_r4 = func_02015ab8();
    if (var_r4 == 0) {
        if (arg2 == 0) {
            var_r2 = 0;
        } else {
            var_r2 = func_02015650();
        }
        var_r4 = func_02016290(arg0, &func_02016698, var_r2, arg0, arg1);
        if ((arg2 != 0) && (var_r4 != 0)) {
            func_02015ae0(arg0, var_r4);
        }
    }
    return var_r4;
}
