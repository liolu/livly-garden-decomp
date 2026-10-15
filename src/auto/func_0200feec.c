/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern u16 data_0204bc2c;
extern M2C_UNK data_02127644;

void func_0200feec(void) {
    s32 temp_r3;
    s32 var_r0;

    if ((s32) M2C_FIELD(&data_02127644, volatile s32 *, 0xC) <= 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        return;
    }
    temp_r3                                        = M2C_FIELD(&data_02127644, volatile s32 *, 0xC) - 1;
    M2C_FIELD(&data_02127644, volatile s32 *, 0xC) = temp_r3;
    if ((s32) data_0204bc2c > temp_r3) {
        data_0204bc2c = 0xFFFE;
    }
}
