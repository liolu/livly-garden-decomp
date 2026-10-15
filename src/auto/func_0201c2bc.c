#include "m2c.h"

M2C_UNK func_0201bdd0(s32, void *);                 /* extern */
M2C_UNK func_0201beb4(void *);                      /* extern */
M2C_UNK func_0201c368(void *);                      /* extern */
M2C_UNK func_0201c420();                            /* extern */
M2C_UNK func_0201c51c();                            /* extern */
M2C_UNK func_0201c550();                            /* extern */
M2C_UNK func_0201c9b4(void *);                      /* extern */
M2C_UNK func_0201e01c();                            /* extern */
extern M2C_UNK data_0212cba0;

void func_0201c2bc(void) {
    s32 temp_r0;
    void *temp_r4;

    temp_r4 = *M2C_FIELD(&data_0212cba0, void ***, 8);
    func_0201c51c();
    func_0201c9b4(temp_r4);
    temp_r0 = M2C_FIELD(temp_r4, s32 *, 0x78);
    if (temp_r0 != 0) {
        func_0201bdd0(temp_r0, temp_r4);
    }
    func_0201beb4(temp_r4);
    M2C_FIELD(temp_r4, s32 *, 0x64) = 2;
    func_0201c368(temp_r4 + 0x9C);
    func_0201c550();
    func_0201c420();
    func_0201e01c();
}
