/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0201f330 from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/snd/calls/func_0201f330.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef struct SNDCommand {
    struct SNDCommand *next;
    unsigned int id;
    unsigned int arg[4];
} SNDCommand;
typedef struct SNDCommandMgr {
    SNDCommand *freeHead;
    unsigned int processedTag;
    SNDCommand *reservedHead;
    SNDCommand *reservedTail;
    SNDCommand *freeTail;
    unsigned int unk14;
    int sentRingIndex;
    int sentBlockCount;
    unsigned int nextTag;
} SNDCommandMgr;
extern SNDCommandMgr data_0212cf60;
extern SNDCommand *data_0212cf84[8];
extern SNDCommand data_0212d240[0x100];
extern int func_0201dd98(void);
extern void func_0201ddac(int state);
extern void func_0201cb44(void *address, unsigned int size);
extern SNDCommand *func_0201f160(int block);
extern int func_0201ff10(int channel, unsigned int data, int err);
extern void func_0201f6ec(void);
int func_0201f330(unsigned int flags) {
    int state = func_0201dd98();

    if (data_0212cf60.reservedHead == 0) {
        func_0201ddac(state);
        return 1;
    }

    if (data_0212cf60.sentBlockCount >= 8) {
        if ((flags & 1) == 0) {
            func_0201ddac(state);
            return 0;
        }
        do {
            func_0201f160(1);
        } while (data_0212cf60.sentBlockCount >= 8);
        if (data_0212cf60.reservedHead == 0) {
            func_0201ddac(state);
            return 1;
        }
    }

    func_0201cb44(data_0212d240, sizeof(data_0212d240));

    if (func_0201ff10(7, (unsigned int) data_0212cf60.reservedHead, 0) < 0) {
        if ((flags & 1) == 0) {
            func_0201ddac(state);
            return 0;
        }
        while (data_0212cf60.sentBlockCount >= 8 || func_0201ff10(7, (unsigned int) data_0212cf60.reservedHead, 0) < 0) {
            func_0201ddac(state);
            func_0201f160(0);
            state = func_0201dd98();
            func_0201cb44(data_0212d240, sizeof(data_0212d240));
            if (data_0212cf60.reservedHead == 0) {
                func_0201ddac(state);
                return 1;
            }
        }
    }

    data_0212cf84[data_0212cf60.sentRingIndex] = data_0212cf60.reservedHead;
    data_0212cf60.sentRingIndex++;
    if (data_0212cf60.sentRingIndex > 8) {
        data_0212cf60.sentRingIndex = 0;
    }
    data_0212cf60.reservedHead = 0;
    data_0212cf60.reservedTail = 0;
    data_0212cf60.sentBlockCount++;
    data_0212cf60.nextTag++;
    func_0201ddac(state);

    if ((flags & 2) != 0) {
        func_0201f6ec();
    }
    return 1;
}
