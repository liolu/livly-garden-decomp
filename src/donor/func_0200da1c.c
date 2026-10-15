/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNS_G2dSetSpriteDefaultAttr from https://github.com/ntrtwl/NitroSystem libraries/g2d/src/g2d_Softsprite.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed short int s16;
typedef signed long s32;
typedef int BOOL;
typedef s32 fx32;
typedef u16 GXRgb;
typedef enum {
    GX_TEXSIZE_S8    = 0,
    GX_TEXSIZE_S16   = 1,
    GX_TEXSIZE_S32   = 2,
    GX_TEXSIZE_S64   = 3,
    GX_TEXSIZE_S128  = 4,
    GX_TEXSIZE_S256  = 5,
    GX_TEXSIZE_S512  = 6,
    GX_TEXSIZE_S1024 = 7
} GXTexSizeS;
typedef enum {
    GX_TEXSIZE_T8    = 0,
    GX_TEXSIZE_T16   = 1,
    GX_TEXSIZE_T32   = 2,
    GX_TEXSIZE_T64   = 3,
    GX_TEXSIZE_T128  = 4,
    GX_TEXSIZE_T256  = 5,
    GX_TEXSIZE_T512  = 6,
    GX_TEXSIZE_T1024 = 7
} GXTexSizeT;
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
    GX_TEXPLTTCOLOR0_USE  = 0,
    GX_TEXPLTTCOLOR0_TRNS = 1
} GXTexPlttColor0;
typedef enum {
    GX_OBJVRAMMODE_CHAR_2D      = (0 << 4) | (0 << 20),
    GX_OBJVRAMMODE_CHAR_1D_32K  = (1 << 4) | (0 << 20),
    GX_OBJVRAMMODE_CHAR_1D_64K  = (1 << 4) | (1 << 20),
    GX_OBJVRAMMODE_CHAR_1D_128K = (1 << 4) | (2 << 20),
    GX_OBJVRAMMODE_CHAR_1D_256K = (1 << 4) | (3 << 20)
} GXOBJVRamModeChar;
extern const u16(*ctrdgi_fl_maxtime);
typedef struct NNSG2dSVec2 {
    s16 x;
    s16 y;
} NNSG2dSVec2;
typedef struct NNSG2dFVec2 {
    fx32 x;
    fx32 y;
} NNSG2dFVec2;
typedef struct NNSG2dImageAttr {
    GXTexSizeS sizeS;
    GXTexSizeT sizeT;
    GXTexFmt fmt;
    BOOL bExtendedPlt;
    GXTexPlttColor0 plttUse;
    GXOBJVRamModeChar mappingType;
} NNSG2dImageAttr;
typedef struct NNSG2dSimpleSprite {
    NNSG2dSVec2 pos;
    NNSG2dSVec2 size;
    u16 rotZ;
    u8 priority;
    u8 alpha;
} NNSG2dSimpleSprite;
typedef struct NNSG2dBasicSprite {
    NNSG2dSimpleSprite simpleParams;
    NNSG2dImageAttr *pTextureAttr;
    u32 texAddr;
    u32 plttAddr;
    u16 plttOffset;
    GXRgb color;
} NNSG2dBasicSprite;
typedef struct NNSG2dExtendedSprite {
    NNSG2dBasicSprite basicParams;
    NNSG2dFVec2 uvUL;
    NNSG2dFVec2 uvLR;
    BOOL flipH;
    BOOL flipV;
    NNSG2dSVec2 rotO;
    u16 rotX;
    u16 rotY;
} NNSG2dExtendedSprite;
extern void func_0200da1c(const NNSG2dExtendedSprite *pE);
extern NNSG2dExtendedSprite data_02126644;
void func_0200da1c(const NNSG2dExtendedSprite *pE) {
    data_02126644 = *pE;
}
