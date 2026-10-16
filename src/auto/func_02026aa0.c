/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

extern int func_02026acc(int a0, int a1, int a2);
extern int data_0212f560;

/* Ov105_WmInit from https://github.com/Yokimitsuro/khdays-decomp src/overlays/system/ov105_wireless/Ov105_WmInit.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
int func_02026aa0(int a0, int a1) {
    int result = func_02026acc(a0, a1, 0xf00);
    if (result != 0) {
        return result;
    }
    *(unsigned short *) (*(char **) ((char *) &data_0212f560 + 4) + 0x16) = 0;
    return result;
}
