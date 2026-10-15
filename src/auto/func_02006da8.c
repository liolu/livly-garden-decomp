#include "m2c.h"

M2C_UNK func_02014470(void *, M2C_UNK, M2C_UNK);    /* extern */
extern M2C_UNK data_02055954;
extern M2C_UNK data_02055974;

void func_02006da8(s32 arg0, M2C_UNK arg1) {
    *((u16 *) ((s8 *) &data_02055954 + (arg0 * 2))) = 0x7F;
    func_02014470((M2C_UNK *) ((s8 *) &data_02055974 + (arg0 * 4)), 0x7F, arg1);
}
