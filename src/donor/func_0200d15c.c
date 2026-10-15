/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02068054 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/fnd/fnd_heapcommon.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef s32 BOOL;
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
extern void func_0200cef4(UnkFndList *list, u16 offset);
extern void func_0200cf38(UnkFndList *list, void *obj);
extern void func_0200d15c(UnkFndHeapHead *heap, u32 signature, void *start, void *end, u16 option);
extern BOOL data_0212662c;
extern UnkFndList data_02126630;
UnkFndList *func_0200d134(void *heap);
void func_0200d15c(UnkFndHeapHead *heap, u32 signature, void *start, void *end, u16 option) {
    heap->unk_00 = signature;
    heap->unk_18 = start;
    heap->unk_1c = end;
    heap->unk_20 = 0;
    heap->unk_20 = (heap->unk_20 & ~0xff) | (option & 0xff);
    func_0200cef4(&heap->unk_0c, 4);
    if (!data_0212662c) {
        func_0200cef4(&data_02126630, 4);
        data_0212662c = 1;
    }
    func_0200cf38(func_0200d134(heap), heap);
}
