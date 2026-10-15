#include "m2c.h"

M2C_UNK func_0201c8bc(M2C_UNK *);                   /* extern */
M2C_UNK func_0201f08c();                            /* extern */
M2C_UNK func_0201f79c();                            /* extern */
extern s32 data_0212cf44;
extern M2C_UNK data_0212cf48;

void func_0201f02c(void) {
    if (data_0212cf44 != 0) {
        return;
    }
    data_0212cf44 = 1;
    func_0201c8bc(&data_0212cf48);
    func_0201f08c();
    func_0201f79c();
}
