#include "m2c.h"

M2C_UNK func_0201de08(s32);                         /* extern */
M2C_UNK func_0201e01c();                            /* extern */
M2C_UNK func_0201e368(M2C_UNK);                     /* extern */
s32 func_02023d20();                                /* extern */
M2C_UNK func_02026a50(M2C_UNK, M2C_UNK);            /* extern */

void func_02026964(void) {
    s32 var_r0;
    s32 var_r5;

    var_r5 = 1;
    func_0201e368(0);
    func_0201e368(1);
    func_0201e368(2);
    func_0201e368(3);
    if (((s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 0xF) != 0) {
        var_r0 = func_02023d20();
        if (var_r0 == 4) {
            do {
                func_0201de08(0xA3A47);
                var_r0 = func_02023d20();
            } while (var_r0 == 4);
        }
        if (var_r0 == 0) {
            var_r5 = 0;
        }
    }
    if (var_r5 != 0) {
        func_02026a50(1, 1);
    }
    func_0201e01c();
}
