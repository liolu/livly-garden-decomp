#include "m2c.h"

M2C_UNK func_0200cf38(M2C_UNK *, M2C_UNK);          /* extern */
s32 func_0201dd98();                                /* extern */
M2C_UNK func_0201ddac(s32);                         /* extern */
extern M2C_UNK data_0212bc7c;

void func_02017618(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_0201dd98();
    func_0200cf38(&data_0212bc7c, arg0);
    func_0201ddac(temp_r4);
}
