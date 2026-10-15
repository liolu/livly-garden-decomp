#include "m2c.h"

M2C_UNK func_0201fd94();                            /* extern */
M2C_UNK func_0201fea0(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_0201feec(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02028f18();                            /* extern */
M2C_UNK func_020291e8(M2C_UNK);                     /* extern */
M2C_UNK func_020292e4();                            /* extern */
M2C_UNK func_02029588(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02130020;
extern M2C_UNK data_02130100;
extern M2C_UNK func_020294d8;
extern M2C_UNK func_02029504;
extern M2C_UNK func_02029574;

void func_02029230(void) {
    if (M2C_FIELD(&data_02130020, s32 *, 8) != 0) {
        return;
    }
    M2C_FIELD(&data_02130020, s32 *, 8) = 1;
    func_02028f18();
    M2C_FIELD(&data_02130020, s32 *, 0xC) = 0;
    func_0201fd94();
    do {

    } while (func_0201feec(0xD, 1) == 0);
    func_0201fea0(0xD, &func_020294d8);
    func_020292e4();
    func_0201fea0(0xD, NULL);
    func_0201fea0(0xD, &func_02029504);
    M2C_FIELD(&data_02130020, s32 *, 0x18) = 0;
    func_02029588(&data_02130100);
    func_0201fea0(0x11, &func_02029574);
    func_020291e8(0);
}
