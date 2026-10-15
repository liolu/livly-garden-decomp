#include "engine.h"
#include "m2c.h"

void func_02019af4(M2C_UNK);
void func_0201e300(M2C_UNK);

extern s32 data_0204bc54;
extern M2C_UNK data_0212cb1c;

void func_0201b538(void) {
    if (data_0204bc54 != -1) {
        func_0201e300(data_0204bc54);
    }
    func_02019af4(M2C_FIELD(&data_0212cb1c, s32 *, 0xC));
    M2C_FIELD(&data_0212cb1c, s32 *, 0xC) = 0;
    M2C_FIELD(&data_0212cb1c, s32 *, 8)   = 0;
}
