#include "m2c.h"

M2C_UNK func_020257b4(u16);                         /* extern */
M2C_UNK func_020257d0(u16);                         /* extern */
extern s32 data_0212eb3c;

s32 func_02021b70(s32 arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
        case 9:
            func_020257b4((u16) data_0212eb3c);
            return 0;
        case 10:
            func_020257d0((u16) data_0212eb3c);
            return 0;
        case 1:
            return 4;
        default:
            return 8;
    }
}
