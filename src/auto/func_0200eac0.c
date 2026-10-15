#include "m2c.h"

M2C_UNK func_0200e5bc(void *, M2C_UNK, M2C_UNK);    /* extern */

void func_0200eac0(void *arg0, M2C_UNK arg1, M2C_UNK arg2, void *arg3) {
    s32 var_r1;
    s32 var_r1_2;
    u16 temp_r1;
    u16 temp_r1_2;

    temp_r1 = M2C_FIELD(arg0, u16 *, 2);
    if (M2C_FIELD(arg0, s32 *, 8) == 0) {
        switch ((s32) temp_r1) {                    /* switch 1; irregular */
            case 1:                                     /* switch 1 */
                var_r1 = 0;
                break;
            case 2:                                     /* switch 1 */
                var_r1 = 1;
                break;
            case 4:                                     /* switch 1 */
                var_r1 = 2;
                break;
            case 8:                                     /* switch 1 */
                var_r1 = 3;
                break;
            case 16:                                    /* switch 1 */
                var_r1 = 4;
                break;
            case 32:                                    /* switch 1 */
                var_r1 = 5;
                break;
            default:                                    /* switch 1 */
                var_r1 = 0;
                break;
        }
        M2C_FIELD(arg3, s32 *, 0xC) = var_r1;
        temp_r1_2                   = M2C_FIELD(arg0, u16 *, 0);
        switch ((s32) temp_r1_2) {                  /* switch 2; irregular */
            case 1:                                     /* switch 2 */
                var_r1_2 = 0;
                break;
            case 2:                                     /* switch 2 */
                var_r1_2 = 1;
                break;
            case 4:                                     /* switch 2 */
                var_r1_2 = 2;
                break;
            case 8:                                     /* switch 2 */
                var_r1_2 = 3;
                break;
            case 16:                                    /* switch 2 */
                var_r1_2 = 4;
                break;
            case 32:                                    /* switch 2 */
                var_r1_2 = 5;
                break;
            default:                                    /* switch 2 */
                var_r1_2 = 0;
                break;
        }
        M2C_FIELD(arg3, s32 *, 0x10) = var_r1_2;
    } else {
        M2C_FIELD(arg3, s32 *, 0xC)  = (s32) temp_r1;
        M2C_FIELD(arg3, s32 *, 0x10) = (s32) M2C_FIELD(arg0, u16 *, 0);
    }
    M2C_FIELD(arg3, s32 *, 0x14) = (s32) M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(arg3, s32 *, 0x18) = 0;
    M2C_FIELD(arg3, s32 *, 0x1C) = 1;
    M2C_FIELD(arg3, s32 *, 0x20) = (s32) M2C_FIELD(arg0, s32 *, 8);
    func_0200e5bc(arg3, arg2, arg1);
}
