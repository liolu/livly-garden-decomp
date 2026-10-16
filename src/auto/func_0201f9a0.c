/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0207b094 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/snd/snd_bank.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned char u8;
typedef int s32;
extern void func_0201cb28(void *ptr, u32 size);
extern void func_0201f064(void);
extern void func_0201f078(void);
typedef struct UnkSndWaveArc UnkSndWaveArc;
typedef struct UnkSndWaveArcLink {
    UnkSndWaveArc *waveArc;
    struct UnkSndWaveArcLink *next;
} UnkSndWaveArcLink;
struct UnkSndWaveArc {
    u8 unk_00[8];
    u32 fileSize;
    u8 unk_0c[4];
    u8 blockHeader[8];
    UnkSndWaveArcLink *topLink;
    u32 reserved[7];
    u32 waveCount;
    u32 waveOffset[0];
};
typedef struct UnkSndBankData {
    u8 fileHeader[0x10];
    u8 blockHeader[8];
    UnkSndWaveArcLink waveArcLink[4];
    u32 instCount;
    u32 instOffset[1];
} UnkSndBankData;
void func_0201f9a0(UnkSndBankData *bank, s32 index, UnkSndWaveArc *waveArc) {
    func_0201f064();

    if (bank->waveArcLink[index].waveArc != 0) {
        if (waveArc == bank->waveArcLink[index].waveArc) {
            func_0201f078();
            return;
        }
        if (&bank->waveArcLink[index] == bank->waveArcLink[index].waveArc->topLink) {
            bank->waveArcLink[index].waveArc->topLink = bank->waveArcLink[index].next;
            func_0201cb28(bank->waveArcLink[index].waveArc, 0x3c);
        } else {
            UnkSndWaveArcLink *link;
            for (link = bank->waveArcLink[index].waveArc->topLink; link != 0; link = link->next) {
                if (&bank->waveArcLink[index] == link->next) {
                    break;
                }
            }
            link->next = bank->waveArcLink[index].next;
            func_0201cb28(link, sizeof(UnkSndWaveArcLink));
        }
    }

    {
        UnkSndWaveArcLink *next          = waveArc->topLink;
        waveArc->topLink                 = &bank->waveArcLink[index];
        bank->waveArcLink[index].next    = next;
        bank->waveArcLink[index].waveArc = waveArc;
    }

    func_0201f078();
    func_0201cb28(bank, 0x3c);
    func_0201cb28(waveArc, 0x3c);
}
