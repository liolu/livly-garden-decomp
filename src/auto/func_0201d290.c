#include "engine.h"
#include "m2c.h"

M2C_UNK func_0201dd98(void);
void func_0201ddac(M2C_UNK);

extern M2C_UNK data_0212ce24;

s32 func_0201d290(s32 arg0, s32 arg1) {
    s32 *temp_r1;
    s32 temp_r0;
    s32 temp_r4;

    temp_r0  = func_0201dd98();
    temp_r1  = *((M2C_UNK *) ((s8 *) &data_0212ce24 + (arg0 * 4)));
    temp_r4  = *temp_r1;
    *temp_r1 = arg1;
    func_0201ddac(temp_r0);
    return temp_r4;
}
