#include "m2c.h"

M2C_UNK func_0200d040(M2C_UNK *, void *);           /* extern */
M2C_UNK func_02014220(s32);                         /* extern */
extern M2C_UNK data_0212b568;

void func_02014fc0(void *arg0) {
    func_02014220(M2C_FIELD(arg0, s32 *, 0x40));
    func_0200d040(&data_0212b568, arg0);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~1);
}
