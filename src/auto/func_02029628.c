/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

extern int func_0201dd98(void);
extern void func_0201ddac(int state);
extern void func_0201e660(void *dst, int value, int size);
extern void func_0201c318(void *queue);
extern void func_0201c208(void);
extern char data_021301e8;
typedef struct {
    int (*run)(void *);
    void (*done)(void *);
    int result;
    int rest[6];
} Ov_CardJob;

/* JobQueue_WorkerLoop from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/mi/calls/JobQueue_WorkerLoop.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
void func_02029628(char *ctx) {
    Ov_CardJob job;
    void (*done)(void *);
    int enabled;
    for (;;) {
        func_0201e660(&job, 0, 0x24);
        enabled = func_0201dd98();
        while (*(char *volatile *) (ctx + 0xc0) == 0) {
            func_0201c318(0);
        }
        job = *(Ov_CardJob *) *(char *volatile *) (ctx + 0xc0);
        func_0201ddac(enabled);
        if (job.run != 0) {
            job.result = job.run(&job);
        }
        enabled                           = func_0201dd98();
        done                              = job.done;
        *((char *) &data_021301e8 + 0x26) = 0;
        if (done != 0) {
            done(&job);
        }
        if (*(int *) &data_021301e8 != 0) {
            *(char *volatile *) (ctx + 0xc0) = 0;
            func_0201ddac(enabled);
        } else {
            func_0201c208();
            return;
        }
    }
}
