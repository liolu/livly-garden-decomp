#include "engine.h"
#include "m2c.h"

void func_02029818(M2C_UNK);
void func_02029c94(M2C_UNK);

extern M2C_UNK data_02130610;

void func_020297f4(void) {
    func_02029c94(1);
    M2C_FIELD(&data_02130610, s32 *, 0xC) = 1;
    func_02029818(1);
}
