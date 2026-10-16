/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

struct Node72 {
    struct Node72 *next;
    void (*fn)(void *object, int v);
    void *object;
};
extern struct Node72 *data_02130b60;

/* func_021424e8 from https://github.com/RonyxDumb/mkds src/arm9/021424e8_func_021424e8.c (license: none), reused by
 * tools/donor_match.py */
void func_0202bb1c(void) {
    struct Node72 *head = data_02130b60;
    if (head == 0) {
        return;
    }
    do {
        data_02130b60 = head->next;
        head->fn(head->object, -1);
        head = data_02130b60;
    } while (head != 0);
}
