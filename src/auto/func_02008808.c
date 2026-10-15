#include "m2c.h"

s32 func_020011b4(s32, M2C_UNK *);                  /* extern */
M2C_UNK func_02008210(s32, s32, s32, s32, s32);     /* extern */
M2C_UNK func_0200b358(M2C_UNK, s32, s32, M2C_UNK);  /* extern */
M2C_UNK func_0201d1b0(M2C_UNK, M2C_UNK, s32);       /* extern */
M2C_UNK func_0201e50c(s32, s32, M2C_UNK);           /* extern */
extern M2C_UNK func_0200758c;

void func_02008808(M2C_UNK arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s32 temp_r0;

    temp_r0 = func_020011b4(arg3 + 0x184, &func_0200758c);
    func_0201e50c(temp_r0, arg1, 0x20);
    func_02008210(arg3, arg4, arg5, arg6, arg1);
    switch (arg7) {                                 /* irregular */
        case 0:
            func_0200b358(arg0, arg1, arg2, 1);
            func_0200b358(arg0, arg1, arg2 + 1, 1);
            func_0200b358(arg0, arg1, arg2 + 0xD, 1);
            break;
        case 1:
            func_0201e50c(arg1, (arg2 << 5) + 0x05000200, 0x20);
            func_0201e50c(arg1, ((arg2 + 1) << 5) + 0x05000200, 0x20);
            break;
        case 2:
            func_0201e50c(arg1, (arg2 << 5) + 0x05000600, 0x20);
            func_0201e50c(arg1, ((arg2 + 1) << 5) + 0x05000600, 0x20);
            break;
    }
    func_0201d1b0(0, -1, temp_r0);
}
