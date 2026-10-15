#include "m2c.h"

M2C_UNK func_02014240();                            /* extern */
M2C_UNK func_0201450c();                            /* extern */
M2C_UNK func_0201516c();                            /* extern */
M2C_UNK func_0201f02c();                            /* extern */
M2C_UNK func_02024458(M2C_UNK *);                   /* extern */
M2C_UNK func_02024470(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02128880;
extern M2C_UNK data_02128890;
extern M2C_UNK data_0212889c;
extern M2C_UNK func_02014100;
extern M2C_UNK func_02014138;

void func_02013fe8(void) {
    if (M2C_FIELD(&data_02128880, s32 *, 0xC) != 0) {
        return;
    }
    M2C_FIELD(&data_02128880, s32 *, 0xC) = 1;
    func_0201f02c();
    M2C_FIELD(&data_02128880, M2C_UNK **, 0x10) = &func_02014100;
    M2C_FIELD(&data_02128880, s32 *, 0x14)      = 0;
    M2C_FIELD(&data_02128880, M2C_UNK **, 0x1C) = &func_02014138;
    M2C_FIELD(&data_02128880, s32 *, 0x20)      = 0;
    func_02024458(&data_02128890);
    func_02024470(&data_0212889c);
    func_02014240();
    func_0201516c();
    func_0201450c();
    M2C_FIELD(&data_02128880, s8 *, 0)  = -1;
    M2C_FIELD(&data_02128880, s32 *, 4) = 1;
}
