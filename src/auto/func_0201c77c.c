/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0201c77c from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/func_0201c77c.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
extern int func_0201dd98(void);
extern void func_0201ddac(int state);
extern void func_0201c318(void *queue);
extern void func_0201c368(void *queue);
extern long long func_02029ffc(int a, int b);
int func_0201c77c(char *q, void **out, int flags) {
    int enabled = func_0201dd98();
    while (*(int *) (q + 0x1c) == 0) {
        if ((flags & 1) == 0) {
            func_0201ddac(enabled);
            return 0;
        }
        func_0201c318(q + 8);
    }
    if (out != 0) {
        *out = (*(void ***) (q + 0x10))[*(int *) (q + 0x18)];
    }
    *(int *) (q + 0x18) = (int) (func_02029ffc(*(int *) (q + 0x18) + 1, *(int *) (q + 0x14)) >> 32);
    *(int *) (q + 0x1c) = *(int *) (q + 0x1c) - 1;
    func_0201c368(q);
    func_0201ddac(enabled);
    return 1;
}
