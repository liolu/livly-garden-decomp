/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0200377c from projets/farm-frenzy/src/donor/func_0200377c.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef struct {
    s32 clearImageBank;
    u32 texStartAddr;
    u32 texPlttStartAddr;
    s32 texPlttBank;
    u32 clearImageAddr;
    s32 texBank;
    u32 texStartAddr2;
    u32 texSize1;
} UnkGxLoad3dState;
extern UnkGxLoad3dState data_0212cb1c;
extern const u16 data_0204a064[8];
extern s32 func_02019ecc(void);
void func_0201b498(void) {
    s32 bank                       = func_02019ecc();
    data_0212cb1c.texPlttBank      = bank;
    data_0212cb1c.texPlttStartAddr = data_0204a064[bank >> 4] << 12;
}
