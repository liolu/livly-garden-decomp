#include "m2c.h"

M2C_UNK func_0201e50c(s32, s32, s32);               /* extern */
extern M2C_UNK data_0204b6c0;

void func_02001d90(void *arg0) {
    func_0201e50c(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 0),
                  *((M2C_UNK *) ((s8 *) &data_0204b6c0 + (M2C_FIELD(arg0, s32 *, 0xC) * 4))));
}
