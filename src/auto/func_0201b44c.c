#include "engine.h"
#include "m2c.h"

void func_0201991c(M2C_UNK);
void func_0201e300(M2C_UNK);

extern s32 data_0204bc54;
extern M2C_UNK data_0212cb1c;

void func_0201b44c(void) {
    if (data_0204bc54 != -1) {
        func_0201e300(data_0204bc54);
    }
    func_0201991c(M2C_FIELD(&data_0212cb1c, s32 *, 0x14));
    M2C_FIELD(&data_0212cb1c, s32 *, 0x1C) = 0;
    M2C_FIELD(&data_0212cb1c, s32 *, 0x18) = 0;
    M2C_FIELD(&data_0212cb1c, s32 *, 4)    = 0;
    M2C_FIELD(&data_0212cb1c, s32 *, 0x14) = 0;
}
