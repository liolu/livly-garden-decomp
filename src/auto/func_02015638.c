#include "m2c.h"

extern s32 data_0212bc30;

s32 func_02015638(s32 arg0) {
    s32 temp_r2;

    temp_r2       = data_0212bc30;
    data_0212bc30 = arg0;
    return temp_r2;
}
