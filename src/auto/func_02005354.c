#include "m2c.h"

extern M2C_UNK data_0205395a;

s16 func_02005354(s32 arg0) {
    return *((u16 *) ((s8 *) &data_0205395a + (arg0 * 4)));
}
