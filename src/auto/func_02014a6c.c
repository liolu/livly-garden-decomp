#include "engine.h"
#include "m2c.h"

void func_0200cf38(void *, void *);
void func_0200d040(void *, void *);

extern M2C_UNK data_0212ac8c;
extern M2C_UNK data_0212ac98;

void func_02014a6c(s32 arg0) {
    s32 *temp_r1;
    void *temp_r1_2;
    void *temp_r5;

    temp_r1 = M2C_FIELD(arg0, s32 **, 0);
    if (temp_r1 != NULL) {
        *temp_r1                   = 0;
        M2C_FIELD(arg0, s32 **, 0) = NULL;
    }
    temp_r5 = M2C_FIELD(arg0, void **, 4);
    func_0200d040(temp_r5, (void *) arg0);
    M2C_FIELD(arg0, void **, 4) = NULL;
    temp_r1_2                   = M2C_FIELD(arg0, void **, 8);
    if (temp_r1_2 != NULL) {
        func_0200cf38(temp_r5 + 0xC, temp_r1_2);
        M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0xC) = 0;
        M2C_FIELD(arg0, void **, 8)                        = NULL;
    }
    func_0200d040(&data_0212ac98, (void *) arg0);
    func_0200cf38(&data_0212ac8c, (void *) arg0);
    M2C_FIELD(arg0, s8 *, 0x2C) = 0;
}
