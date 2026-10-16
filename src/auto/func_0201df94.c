/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
extern u32 func_0201dd98(void);
extern u32 func_0201ddac(u32 state);
extern u32 data_0212cf2c;
extern u16 data_0212cf30[9];
u32 func_0201df58(register u32 value);

/* func_02079f00 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_vramexclusive.c (license: none),
 * reused by tools/donor_match.py */
void func_0201df94(u32 bank, u16 lockID) {
    u32 mask;
    u32 enabled = func_0201dd98();

    mask = bank & data_0212cf2c & 0x1ff;

    while (1) {
        s32 i = 31 - func_0201df58(mask);
        if (i < 0) {
            break;
        }
        mask &= ~(1 << i);
        if (data_0212cf30[i] == lockID) {
            data_0212cf30[i] = 0;
            data_0212cf2c &= ~(1 << i);
        }
    }
    func_0201ddac(enabled);
}
