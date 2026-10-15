#include "engine.h"
#include "m2c.h"

void func_0200f8c8(M2C_UNK);
void func_0201069c(M2C_UNK);
void func_020106ac(void);
void func_020106c0(M2C_UNK);
M2C_UNK func_020106d0(void);

extern M2C_UNK data_02127644;

void func_0200fc60(s32 arg0) {
    s32 temp_r4;

    if (M2C_FIELD(M2C_FIELD(&data_02127644, void **, 8), s32 *, 0x80) != 0) {
        temp_r4 = func_020106d0();
        func_0201069c(1);
        func_020106c0(M2C_FIELD(M2C_FIELD(&data_02127644, void **, 8), s32 *, 0x80));
        func_0200f8c8(arg0);
        func_0201069c(0);
        func_020106c0(temp_r4);
        func_020106ac();
        return;
    }
    func_0200f8c8(arg0);
}
