/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0207a478 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/snd/snd_interface.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
extern void func_0201efe8(s32 id, u32 arg0, u32 arg1, u32 arg2, u32 arg3);
extern void func_0201f7cc(s32 no);
void func_0201ed80(u32 arg0, u32 arg1, u32 alarmMask, u32 arg3) {
    s32 i;
    u32 mask = alarmMask;

    for (i = 0; i < 8 && mask != 0; i++, mask >>= 1) {
        if (mask & 1) {
            func_0201f7cc(i);
        }
    }
    func_0201efe8(13, arg0, arg1, alarmMask, arg3);
}
void func_0201efe8(s32 id, u32 arg0, u32 arg1, u32 arg2, u32 arg3);
