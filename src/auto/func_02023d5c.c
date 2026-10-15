#include "engine.h"
#include "m2c.h"

s32 func_02023ae8(M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_0202435c(void);

s32 func_02023d5c(s32 arg0) {
    if (func_0202435c() == 0) {
        return 0;
    }
    return func_02023ae8(0x10, (s32) (u16) arg0, 0);
}
