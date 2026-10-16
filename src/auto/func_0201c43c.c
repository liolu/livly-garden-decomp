/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

extern int func_0201dd98(void);
extern void func_0201ddac(int);
extern void func_0201be54(void *);
extern void func_0201befc(void);
typedef struct Node {
    char pad[0x68];
    struct Node *next;
    int pad2;
    int value;
} Node;
typedef struct {
    char pad[0x2c];
    Node *head;
} ListHead;
extern ListHead data_0212cba0;
extern Node data_0212cbd4;

/* OSi_WaitOnExitProc from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/OSi_WaitOnExitProc.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
int func_0201c43c(Node *target, int newval) {
    Node *cur;
    Node *prev;
    int intr;

    prev = 0;
    cur  = data_0212cba0.head;
    intr = func_0201dd98();
    while (cur != 0 && cur != target) {
        prev = cur;
        cur  = cur->next;
    }
    if (cur == 0 || cur == &data_0212cbd4) {
        func_0201ddac(intr);
        return 0;
    }
    if (cur->value != newval) {
        if (prev == 0) {
            data_0212cba0.head = target->next;
        } else {
            prev->next = target->next;
        }
        target->value = newval;
        func_0201be54(target);
        func_0201befc();
    }
    func_0201ddac(intr);
    return 1;
}
