#include "engine.h"
#include "m2c.h"

M2C_UNK func_02004bcc(M2C_UNK, M2C_UNK);
void func_02004be8(M2C_UNK, M2C_UNK, M2C_UNK);

s32 func_02004c40(s32 arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r5;
    s32 var_r6;

    var_r6 = -1;
    var_r5 = 0;
loop_1:
    temp_r0 = func_02004bcc(arg0, var_r5);
    if (temp_r0 == arg1) {
        return -2;
    }
    if ((temp_r0 == 0) && (var_r6 == -1)) {
        var_r6 = var_r5;
    }
    var_r5 += 1;
    if (var_r5 >= 0xA) {
        if (var_r6 == -1) {
            return -1;
        }
        func_02004be8(arg0, var_r6, (s32) (s16) arg1);
        return var_r6;
    }
    goto loop_1;
}
