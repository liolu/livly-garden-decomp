/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02067fb0 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/fnd/fnd_list.c (license: none), reused
 * by tools/donor_match.py */
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
void *func_0200d0b8(UnkFndList *list, void *obj) {
    if (obj == 0) {
        return list->unk_04;
    }
    return ((UnkFndLink *) ((u32) (obj) + (list)->unk_0a))->unk_00;
}
