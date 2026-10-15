#include "m2c.h"

M2C_UNK func_0200d040(M2C_UNK *, void *);           /* extern */
M2C_UNK func_02014928(M2C_UNK *, void *);           /* extern */
M2C_UNK func_02014978(void *);                      /* extern */
extern M2C_UNK data_0212ac98;

void func_02014b40(void *arg0, s8 arg1) {
    M2C_UNK *temp_r4;

    temp_r4 = M2C_FIELD(arg0, M2C_UNK **, 4);
    if (temp_r4 != NULL) {
        func_0200d040(temp_r4, arg0);
        M2C_FIELD(arg0, M2C_UNK **, 4) = NULL;
    }
    func_0200d040(&data_0212ac98, arg0);
    M2C_FIELD(arg0, s8 *, 0x3D) = arg1;
    if (temp_r4 != NULL) {
        func_02014928(temp_r4, arg0);
    }
    func_02014978(arg0);
}
