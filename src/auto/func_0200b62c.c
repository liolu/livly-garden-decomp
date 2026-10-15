#include "engine.h"
#include "m2c.h"

void func_0200ace8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_0200ad1c(void *, M2C_UNK, M2C_UNK, s32);

void func_0200b62c(s32 arg0) {
    u32 temp_r4;
    u32 temp_r6;
    void *temp_r0;
    void *temp_r5;

    temp_r0 = arg0 + (*(M2C_UNK *) arg0 * 4);
    temp_r5 = M2C_FIELD(temp_r0, void **, 0x604);
    temp_r6 = M2C_FIELD(temp_r0, s32 *, 0x804);
    temp_r4 = M2C_FIELD(temp_r0, s32 *, 0x404);
    func_0200ace8(M2C_FIELD(temp_r5, s32 *, 0x38), M2C_FIELD(temp_r0, s32 *, 0x204) << 5, temp_r6, (s32) temp_r5);
    func_0200ad1c(temp_r5, temp_r4 << 5, temp_r6, (s32) (temp_r5 + 0x24));
}
