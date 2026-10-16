/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02077594 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_interrupt.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef struct UnkIrqCallbackInfo {
    void (*func)(void *);
    u32 enable;
    void *arg;
} UnkIrqCallbackInfo;
extern UnkIrqCallbackInfo data_0212cb3c[8];
extern void func_0201b7dc(u32 dmaNo, void (*func)(void *), void *arg);
extern u32 func_0201b898(u32 mask);
extern UnkIrqCallbackInfo data_0212cb3c[8];
void func_0201b7dc(u32 dmaNo, void (*func)(void *), void *arg) {
    u32 mask                    = 1 << (dmaNo + 8);
    data_0212cb3c[dmaNo].func   = func;
    data_0212cb3c[dmaNo].arg    = arg;
    data_0212cb3c[dmaNo].enable = func_0201b898(mask) & mask;
}
u32 func_0201b898(u32 mask);
