/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0201befc from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/func_0201befc.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef int BOOL;
typedef struct OSContext {
    char dummy[1];
} OSContext;
typedef void (*OSSwitchThreadCallback)(void *from, void *to);
extern BOOL func_0201c610(OSContext *context);
extern void func_0201c65c(OSContext *context);
extern int func_0201ddfc(void);
extern void *func_0201c3f8(void);
struct Globals {
    OSSwitchThreadCallback systemCallback;
    unsigned int rescheduleCount;
    void ***currentThreadPtr;
    char _pad[0x18];
    unsigned short isNeedRescheduling;
    unsigned short irqDepth;
    void *currentThread;
    void *list;
    OSSwitchThreadCallback switchCallback;
};
struct ThreadInfo2 {
    unsigned short isNeedRescheduling;
    unsigned short irqDepth;
    void *currentThread;
    void *list;
    OSSwitchThreadCallback switchCallback;
};
extern struct ThreadInfo2 data_0212cbc4;
extern struct Globals data_0212cba0;
void func_0201befc(void) {
    struct ThreadInfo2 *info;
    void **curPtr;
    void *cur;
    void *next;
    OSSwitchThreadCallback cb;

    if (data_0212cba0.rescheduleCount != 0) {
        return;
    }

    info = &data_0212cbc4;
    if (data_0212cba0.irqDepth != 0 || func_0201ddfc() == 0x12) {
        info->isNeedRescheduling = 1;
        return;
    }

    curPtr = (void **) data_0212cba0.currentThreadPtr;
    cur    = *curPtr;
    next   = func_0201c3f8();

    if (cur == next || next == 0) {
        return;
    }

    if (*(int *) ((char *) cur + 0x64) != 2) {
        if (func_0201c610((OSContext *) cur)) {
            return;
        }
    }

    cb = data_0212cba0.systemCallback;
    if (cb != 0) {
        cb(cur, next);
    }

    cb = info->switchCallback;
    if (cb != 0) {
        cb(cur, next);
    }

    data_0212cba0.currentThread = next;
    func_0201c65c((OSContext *) next);
}
