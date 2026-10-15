#include "m2c.h"

void func_02006874(s32 arg0, s32 arg1, s16 *arg2, s8 *arg3) {
    s16 *var_r2;
    s8 *var_r3;
    s8 temp_ip;
    u16 var_ip;

    var_r2 = arg2;
    var_r3 = arg3;
    if (*var_r3 == 0) {
        return;
    }
    do {
        temp_ip = *var_r3;
        var_r3  = (s8 *) ((s8 *) var_r3 + 1);
        var_ip  = temp_ip - 0x20;
        if ((u32) var_ip >= 0x40U) {
            var_ip -= 0x20;
        }
        *var_r2 = (var_ip + arg0) | (arg1 << 0xC);
        var_r2  = (s16 *) ((s8 *) var_r2 + 2);
    } while (*var_r3 != 0);
}
