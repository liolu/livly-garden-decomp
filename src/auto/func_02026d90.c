/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0207c6e0 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/wm/wm_system.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef s32 BOOL;
typedef struct UnkMessageQueue {
    u32 unk_00[8];
} UnkMessageQueue;
extern BOOL func_0201c6e8(UnkMessageQueue *queue, void *msg, s32 flags);
extern void func_0201cb28(void *ptr, u32 size);
extern s32 func_0201ff10(u32 tag, u32 data, BOOL err);
typedef char *va_list;
extern u32 *func_02026d38(void);
extern u32 func_02026d90(u16 id, u16 paramNum, ...);
extern UnkMessageQueue data_0212f568;
u32 *func_02026d38(void);
u32 func_02026d90(u16 id, u16 paramNum, ...) {
    va_list args;
    s32 i;
    s32 result;
    u32 *buf = func_02026d38();

    if (buf == 0) {
        return 8;
    }
    *(u16 *) buf = id;

    ((args) = ((va_list) ((char *) ((unsigned int) (&paramNum) & ~3U) + ((((unsigned int) (sizeof(paramNum))) + 3U) & ~3U))));
    for (i = 0; i < paramNum; i++) {
        buf[i + 1] = (*(u32 *) ((args += ((((unsigned int) (sizeof(u32))) + 3U) & ~3U)) -
                                ((((unsigned int) (sizeof(u32))) + 3U) & ~3U)));
    }
    ((void) 0);

    func_0201cb28(buf, 0x100);
    result = func_0201ff10(10, (u32) buf, 0);
    func_0201c6e8(&data_0212f568, buf, 1);
    if (result < 0) {
        return 8;
    }
    return 2;
}
