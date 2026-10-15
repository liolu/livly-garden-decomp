#include "m2c.h"

M2C_UNK func_020096e8();                            /* extern */
M2C_UNK func_02009748();                            /* extern */
M2C_UNK func_02009784();                            /* extern */
M2C_UNK func_020097e4();                            /* extern */
M2C_UNK func_0200d944();                            /* extern */
M2C_UNK func_02010930(M2C_UNK *);                   /* extern */
extern M2C_UNK data_021262ec;
extern M2C_UNK func_0200adf8;

void func_020097b0(s32 arg0) {
    M2C_FIELD(&data_021262ec, s32 *, 0xC) = arg0;
    func_0200d944();
    func_020096e8();
    func_02009748();
    func_02009784();
    func_020097e4();
    func_02010930(&func_0200adf8);
}
