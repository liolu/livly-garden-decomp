#include "engine.h"
#include "m2c.h"

void func_0201e0c8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_0201e55c(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_0204bc54;

void func_0201ad8c(s32 arg0, s32 arg1, s32 arg2) {
    if ((data_0204bc54 != -1) && ((u32) arg2 > 0x30U)) {
        func_0201e0c8(data_0204bc54, arg0, arg1 + 0x07000000, arg2);
        return;
    }
    func_0201e55c(arg0, arg1 + 0x07000000, arg2);
}
