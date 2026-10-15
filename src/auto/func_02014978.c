#include "m2c.h"

M2C_UNK func_0200cfdc();   /* extern */
void *func_0200d0a0();            /* extern */
extern M2C_UNK data_0212ac98;

void func_02014978(void *arg0) {
    void *var_r1;

    var_r1 = func_0200d0a0(&data_0212ac98, 0);
    if (var_r1 != NULL) {
    loop_2:
        if ((u32) M2C_FIELD(arg0, u8 *, 0x3D) >= (u32) M2C_FIELD(var_r1, u8 *, 0x3D)) {
            var_r1 = func_0200d0a0(&data_0212ac98);
            if (var_r1 != NULL) {
                goto loop_2;
            }
        }
    }
    func_0200cfdc(&data_0212ac98, var_r1, arg0);
}
