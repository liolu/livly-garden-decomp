/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0206886c from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/fnd/fnd_frameheap.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef struct UnkFndLink {
    void *unk_00;
    void *unk_04;
} UnkFndLink;
typedef struct UnkFndList {
    void *unk_00;
    void *unk_04;
    u16 unk_08;
    u16 unk_0a;
} UnkFndList;
typedef struct UnkFndHeapHead {
    u32 unk_00;
    UnkFndLink unk_04;
    UnkFndList unk_0c;
    void *unk_18;
    void *unk_1c;
    u32 unk_20;
} UnkFndHeapHead;
typedef struct UnkFrmHeapState {
    u32 unk_00;
    void *unk_04;
    void *unk_08;
    struct UnkFrmHeapState *unk_0c;
} UnkFrmHeapState;
typedef struct UnkFrmHeapHead {
    void *unk_00;
    void *unk_04;
    UnkFrmHeapState *unk_08;
} UnkFrmHeapHead;
typedef struct UnkFrmHeap {
    UnkFndHeapHead unk_00;
    UnkFrmHeapHead unk_24;
} UnkFrmHeap;
UnkFrmHeap *func_0200d1f0(void *start, void *end, u16 option);
UnkFrmHeap *func_0200d32c(void *start, u32 size, u16 option) {
    void *end = (void *) ((u32) (size + (u32) start) & ~((4) - 1));

    start = (void *) ((((4) - 1) + (u32) (start)) & ~((4) - 1));
    if ((u32) start > (u32) end || (u32) end - (u32) start < sizeof(UnkFrmHeap)) {
        return 0;
    }
    return func_0200d1f0(start, end, option);
}
