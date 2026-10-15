#include "engine.h"
#include "m2c.h"

void func_02019770(M2C_UNK);
void func_0201e300(M2C_UNK);

extern s32 data_0204bc54;
extern M2C_UNK data_0212cb00;

void func_0201aff8(void) {
    if (data_0204bc54 != -1) {
        func_0201e300(data_0204bc54);
    }
    func_02019770(M2C_FIELD(&data_0212cb00, s32 *, 0x14));
    M2C_FIELD(&data_0212cb00, s32 *, 0x14) = 0;
    M2C_FIELD(&data_0212cb00, s32 *, 0x10) = 0;
    M2C_FIELD(&data_0212cb00, s32 *, 0xC)  = 0;
}
