#include "m2c.h"

M2C_UNK func_0202c0b4(M2C_UNK *, M2C_UNK **, M2C_UNK *); /* extern */
extern u8 data_0204bf54;
extern M2C_UNK data_0204bf9c;
extern M2C_UNK data_0204bfa8;
extern M2C_UNK func_0202ba1c;

void func_0202b9dc(void) {
    M2C_UNK *sp0;

    if (data_0204bf54 == 0) {
        return;
    }
    sp0 = &data_0204bf9c;
    func_0202c0b4(&data_0204bfa8, &sp0, &func_0202ba1c);
}
