/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02021b20 from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/fs/calls/func_02021b20.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
extern int func_02026578(int a, int b, int c, int d, int e, int f, int g);
extern int func_02021afc();
extern int *data_0212eb3c[];
int func_02021b20(int a, int b, int c, int d) {
    func_02026578((int) data_0212eb3c[1], c, b, d, (int) func_02021afc, a, 1);
    return 6;
}
