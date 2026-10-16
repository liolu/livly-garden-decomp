/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0201c51c from https://github.com/Yokimitsuro/khrecoded-decomp libs/nitro/os/calls/func_0201c51c.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef unsigned long u32;
typedef int OSIntrMode;
typedef struct OSThreadSystemState {
    u32 reserved000;
    u32 rescheduleCount;
} OSThreadSystemState;
extern OSThreadSystemState data_0212cba0;
extern OSIntrMode func_0201dd98(void);
extern OSIntrMode func_0201ddac(OSIntrMode mode);
u32 func_0201c51c(void) {
    OSIntrMode interruptMode = func_0201dd98();
    u32 count;

    if (data_0212cba0.rescheduleCount < (u32) (0 - 1)) {
        count = data_0212cba0.rescheduleCount++;
    }
    (void) func_0201ddac(interruptMode);

    return count;
}
