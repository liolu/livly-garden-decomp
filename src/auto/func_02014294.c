#include "engine.h"
#include "m2c.h"

void func_0200cf38(void *, void *);
void func_02014af0(void *);
u32 func_02015b20(s32, s32);
void *func_02015c64(s32 *, s32, s32, s32, s32);

extern M2C_UNK data_0212b0e4;

s32 func_02014294(s32 arg0, s32 arg1, s32 arg2) {
    u32 temp_r0_2;
    void *temp_r0;

    temp_r0 = func_02015c64((s32 *) arg1, arg2 + 0x14, (s32) func_02014af0, 0, 0);
    if (temp_r0 == NULL) {
        return 0;
    }
    M2C_FIELD(temp_r0, s32 *, 0xC)  = 0;
    M2C_FIELD(temp_r0, s32 *, 0x10) = arg0;
    M2C_FIELD(temp_r0, u32 *, 8)    = 0U;
    temp_r0_2                       = func_02015b20((s32) (temp_r0 + 0x14), arg2);
    if (temp_r0_2 == 0) {
        return 0;
    }
    M2C_FIELD(temp_r0, u32 *, 8) = temp_r0_2;
    func_0200cf38((arg0 * 0x24) + (s32) &data_0212b0e4 + 0xC, temp_r0);
    return 1;
}
