/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* MTX_LookAt from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/mtx/calls/MTX_LookAt.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
typedef signed long s32;
typedef s32 fx32;
typedef struct VecFx32 {
    fx32 x;
    fx32 y;
    fx32 z;
} VecFx32;
typedef struct MtxFx43 {
    fx32 _00, _01, _02;
    fx32 _10, _11, _12;
    fx32 _20, _21, _22;
    fx32 _30, _31, _32;
} MtxFx43;
extern void func_02018a34(const VecFx32 *src, VecFx32 *dst);
extern void func_020189b0(const VecFx32 *a, const VecFx32 *b, VecFx32 *out);
extern fx32 func_02018974(const VecFx32 *a, const VecFx32 *b);
void func_02018564(const VecFx32 *camPos, const VecFx32 *camUp, const VecFx32 *target, MtxFx43 *mtx) {
    VecFx32 vLook, vRight, vUp;

    vLook.x = camPos->x - target->x;
    vLook.y = camPos->y - target->y;
    vLook.z = camPos->z - target->z;

    func_02018a34(&vLook, &vLook);
    func_020189b0(camUp, &vLook, &vRight);
    func_02018a34(&vRight, &vRight);
    func_020189b0(&vLook, &vRight, &vUp);

    mtx->_00 = vRight.x;
    mtx->_01 = vUp.x;
    mtx->_02 = vLook.x;
    mtx->_10 = vRight.y;
    mtx->_11 = vUp.y;
    mtx->_12 = vLook.y;
    mtx->_20 = vRight.z;
    mtx->_21 = vUp.z;
    mtx->_22 = vLook.z;
    mtx->_30 = -func_02018974(camPos, &vRight);
    mtx->_31 = -func_02018974(camPos, &vUp);
    mtx->_32 = -func_02018974(camPos, &vLook);
}
