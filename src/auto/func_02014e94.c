#include "m2c.h"

M2C_UNK func_02014f4c();                            /* extern */

void func_02014e94(void *arg0) {
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1F) >> 0x1F) == 0) {
        return;
    }
    func_02014f4c(arg0);
}
