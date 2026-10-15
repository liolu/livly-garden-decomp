/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* LoadBGCharacter from https://github.com/Yokimitsuro/khdays-decomp libs/nns/g2d/calls/LoadBGCharacter.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef int BOOL;
typedef volatile u16 REGType16v;
typedef volatile u32 REGType32v;
extern void func_0201e50c(const void *srcp, void *destp, u32 size);
static inline void MI_CpuCopy16(const void *src, void *dest, u32 size) {
    func_0201e50c(src, dest, size);
}
extern u32 data_0204bc54;
extern void func_0201cb44(const void *startAddr, u32 nBytes);
extern void func_0201e138(u32 dmaNo, const void *src, void *dest, u32 size);
typedef enum {
    GX_TEXFMT_NONE    = 0,
    GX_TEXFMT_A3I5    = 1,
    GX_TEXFMT_PLTT4   = 2,
    GX_TEXFMT_PLTT16  = 3,
    GX_TEXFMT_PLTT256 = 4,
    GX_TEXFMT_COMP4x4 = 5,
    GX_TEXFMT_A5I3    = 6,
    GX_TEXFMT_DIRECT  = 7
} GXTexFmt;
typedef enum {
    GX_OBJVRAMMODE_CHAR_2D      = (0 << 4) | (0 << 20),
    GX_OBJVRAMMODE_CHAR_1D_32K  = (1 << 4) | (0 << 20),
    GX_OBJVRAMMODE_CHAR_1D_64K  = (1 << 4) | (1 << 20),
    GX_OBJVRAMMODE_CHAR_1D_128K = (1 << 4) | (2 << 20),
    GX_OBJVRAMMODE_CHAR_1D_256K = (1 << 4) | (3 << 20)
} GXOBJVRamModeChar;
typedef union {
    u32 data32[8];
    u16 data16[16];
    u8 data8[32];
} GXCharFmt16;
typedef union {
    u32 data32[16];
    u16 data16[32];
    u8 data8[64];
} GXCharFmt256;
typedef struct NNSG2dCharacterData {
    u16 H;
    u16 W;
    GXTexFmt pixelFmt;
    GXOBJVRamModeChar mappingType;
    u32 characterFmt;
    u32 szByte;
    void *pRawData;
} NNSG2dCharacterData;
typedef struct NNSG2dCharacterPosInfo {
    u16 srcPosX;
    u16 srcPosY;
    u16 srcW;
    u16 srcH;
} NNSG2dCharacterPosInfo;
typedef enum NNSG2dBGSelect {
    NNS_G2D_BGSELECT_MAIN0,
    NNS_G2D_BGSELECT_MAIN1,
    NNS_G2D_BGSELECT_MAIN2,
    NNS_G2D_BGSELECT_MAIN3,
    NNS_G2D_BGSELECT_SUB0,
    NNS_G2D_BGSELECT_SUB1,
    NNS_G2D_BGSELECT_SUB2,
    NNS_G2D_BGSELECT_SUB3,
    NNS_G2D_BGSELECT_NUM
} NNSG2dBGSelect;
inline void NNSi_G2dDmaCopy16(u32 dmaNo, const void *src, void *dest, u32 size) {
    if (dmaNo != ((u32) ~0)) {
        func_0201e138(dmaNo, src, dest, size);
    } else {
        MI_CpuCopy16(src, dest, size);
    }
}
inline REGType16v *GetBGnCNT(NNSG2dBGSelect n) {
    extern REGType16v *const data_02045e7c[];
    return data_02045e7c[n];
}
inline BOOL IsMainBG(NNSG2dBGSelect bg) {
    return (bg <= NNS_G2D_BGSELECT_MAIN3);
}
inline int GetBGCharOffset(void) {
    return (int) (0x10000 * (((*(REGType32v *) (0x04000000 + 0x000)) & 0x07000000) >> 24));
}
inline void *GetBGnCharPtr(NNSG2dBGSelect n) {
    const int baseBlock = 0x4000 * ((*GetBGnCNT(n) & 0x003c) >> 2);
    return (void *) ((IsMainBG(n) ? (0x06000000 + GetBGCharOffset()) : 0x06200000) + baseBlock);
}
inline void LoadBGnChar(NNSG2dBGSelect n, const void *pSrc, u32 offset, u32 szByte) {
    u32 ptr;
    ((void) 0);
    ;
    ptr = (u32) GetBGnCharPtr(n);
    NNSi_G2dDmaCopy16(data_0204bc54, pSrc, (void *) (ptr + offset), szByte);
}
void func_02010f50(NNSG2dBGSelect bg, const NNSG2dCharacterData *pChrData, const NNSG2dCharacterPosInfo *pPosInfo) {
    u32 offset = 0;

    if (pPosInfo != ((void *) 0)) {
        int offsetChars = pPosInfo->srcPosY * pPosInfo->srcW;
        u32 szChar      = (pChrData->pixelFmt == GX_TEXFMT_PLTT256) ? sizeof(GXCharFmt256) : sizeof(GXCharFmt16);

        offset = offsetChars * szChar;
    }

    func_0201cb44(pChrData->pRawData, pChrData->szByte);
    LoadBGnChar(bg, pChrData->pRawData, offset, pChrData->szByte);
}
