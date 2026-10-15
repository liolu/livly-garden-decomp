#include "m2c.h"

M2C_UNK func_0200faf0();                      /* extern */
extern M2C_UNK func_02009acc;
extern M2C_UNK func_02009aec;
extern M2C_UNK func_02009b0c;
extern M2C_UNK func_02009b24;
extern M2C_UNK func_02009b3c;

void func_02009884(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    func_0200faf0();
    func_0200faf0(arg1);
    M2C_FIELD(arg0, s32 *, 0)         = 0;
    M2C_FIELD(arg0, s32 *, 4)         = 0;
    M2C_FIELD(arg0, s32 *, 8)         = 0x100000;
    M2C_FIELD(arg0, s32 *, 0xC)       = 0xC0000;
    M2C_FIELD(arg0, s32 *, 0x14)      = arg2;
    M2C_FIELD(arg0, M2C_UNK **, 0x28) = &func_02009acc;
    M2C_FIELD(arg0, M2C_UNK **, 0x2C) = &func_02009b0c;
    M2C_FIELD(arg0, M2C_UNK **, 0x34) = &func_02009b3c;
    M2C_FIELD(arg1, s32 *, 0)         = 0;
    M2C_FIELD(arg1, s32 *, 4)         = 0xC0000;
    M2C_FIELD(arg1, s32 *, 8)         = 0x100000;
    M2C_FIELD(arg1, s32 *, 0xC)       = 0xC0000;
    M2C_FIELD(arg1, s32 *, 0x14)      = arg3;
    M2C_FIELD(arg1, M2C_UNK **, 0x28) = &func_02009aec;
    M2C_FIELD(arg1, M2C_UNK **, 0x2C) = &func_02009b24;
    M2C_FIELD(arg1, M2C_UNK **, 0x34) = &func_02009b3c;
}
