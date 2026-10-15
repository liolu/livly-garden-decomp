#include "engine.h"
#include "m2c.h"

void func_0200ad1c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void func_0200b674(s32 arg0) {
    s32 temp_r0;
    void *temp_r2;

    temp_r2 = arg0 + (*(M2C_UNK *) arg0 * 4);
    temp_r0 = M2C_FIELD(temp_r2, s32 *, 0x604);
    func_0200ad1c(temp_r0, M2C_FIELD(temp_r2, s32 *, 0x404) << 5, M2C_FIELD(temp_r2, s32 *, 0x804), temp_r0 + 0x24);
}
