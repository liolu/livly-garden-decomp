#include "engine.h"
#include "m2c.h"

M2C_UNK func_0201b8c8(M2C_UNK);
void func_0201d794(M2C_UNK);

extern M2C_UNK data_0212cf08;

void func_0201d9cc(void) {
    if (M2C_FIELD(&data_0212cf08, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_0212cf08, u16 *, 0) = 1U;
    func_0201d794(1);
    M2C_FIELD(&data_0212cf08, s32 *, 4) = 0;
    M2C_FIELD(&data_0212cf08, s32 *, 8) = 0;
    func_0201b8c8(0x10);
}
