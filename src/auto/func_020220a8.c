/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020220a8 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/fs/overlay.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
typedef struct UnkDigestKey {
    const void *key;
    u32 size;
} UnkDigestKey;
extern UnkDigestKey data_0204bc74;
extern void func_02022770(void *digest, const void *src, u32 size, const void *key, u32 keySize);
extern void func_0201e660(void *dest, u8 value, u32 count);
extern void func_0201e71c(const void *src, void *dest, u32 count);
extern UnkDigestKey data_0204bc74;
BOOL func_020220a8(const u8 *digest, void *src, u32 size) {
    s32 i;
    u8 hash[20];
    u8 key[64];

    func_0201e660(hash, 0, sizeof(hash));
    func_0201e71c(data_0204bc74.key, key, data_0204bc74.size);
    func_02022770(hash, src, size, key, data_0204bc74.size);

    for (i = 0; i < sizeof(hash); i += sizeof(u32)) {
        if (*(u32 *) (hash + i) != *(u32 *) (digest + i)) {
            break;
        }
    }
    return i == sizeof(hash);
}
