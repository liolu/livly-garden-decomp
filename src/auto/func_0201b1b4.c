#include "engine.h"
#include "m2c.h"

void func_02019d14(M2C_UNK);
void func_0201e300(M2C_UNK);

extern s32 data_0204bc54;
extern s32 data_0212cb00;

void func_0201b1b4(void) {
    if (data_0204bc54 != -1) {
        func_0201e300(data_0204bc54);
    }
    func_02019d14(data_0212cb00);
    data_0212cb00 = 0;
}
