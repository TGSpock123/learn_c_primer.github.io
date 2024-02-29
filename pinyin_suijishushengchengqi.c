//梅森
#include <stdio.h>
#include <stdint.h>

// 定义 MT19937 常数
#define MT_N 624
#define MT_M 397
#define MT_MATRIX_A 0x9908b0df
#define MT_UPPER_MASK 0x80000000
#define MT_LOWER_MASK 0x7fffffff

// 初始化随机数发生器
void mt_seed(uint32_t seed) {
    mt_state[0] = seed;
    for (int i = 1; i < MT_N; i++) {
        mt_state[i] = (1812433253UL * (mt_state[i - 1] ^ (mt_state[i - 1] >> 30)) + i);
    }
    mt_index = MT_N;
}

// 生成随机数
uint32_t mt_rand() {
    if (mt_index >= MT_N) {
        for (int i = 0; i < MT_N - MT_M; i++) {
            uint32_t y = (mt_state[i] & MT_UPPER_MASK) | (mt_state[i + 1] & MT_LOWER_MASK);
            mt_state[i] = mt_state[i + MT_M] ^ (y >> 1) ^ (-(y & 1) & MT_MATRIX_A);
        }
        for (int i = MT_N - MT_M; i < MT_N - 1; i++) {
            uint32_t y = (mt_state[i] & MT_UPPER_MASK) | (mt_state[i + 1] & MT_LOWER_MASK);
            mt_state[i] = mt_state[i + (MT_M - MT_N)] ^ (y >> 1) ^ (-(y & 1) & MT_MATRIX_A);
        }
        uint32_t y = (mt_state[MT_N - 1] & MT_UPPER_MASK) | (mt_state[0] & MT_LOWER_MASK);
        mt_state[MT_N - 1] = mt_state[MT_M - 1] ^ (y >> 1) ^ (-(y & 1) & MT_MATRIX_A);
        mt_index = 0;
    }

    uint32_t y = mt_state[mt_index++];
    y ^= (y >> 11);
    y ^= (y << 7) & 0x9d2c5680;
    y ^= (y << 15) & 0xefc60000;
    y ^= (y >> 18);
    return y;
}

// 测试代码
int main() {
    // 初始化种子
    mt_seed(5489);

    // 生成随机数
    for (int i = 0; i < 10; i++) {
        printf("%u\n", mt_rand());
    }

    return 0;
}
//xorshift
#include <stdio.h>
#include <stdint.h>

// Xorshift 算法的状态
static uint32_t xorshift_state = 1;

// 生成随机数
uint32_t xorshift_rand() {
    uint32_t x = xorshift_state;
    x ^= x << 13;
    x ^= x >> 17;
    x ^= x << 5;
    xorshift_state = x;
    return x;
}

// 测试代码
int main() {
    // 生成随机数
    for (int i = 0; i < 10; i++) {
        printf("%u\n", xorshift_rand());
    }

    return 0;
}
//pcg
#include <stdio.h>
#include <stdint.h>

// PCG 算法的状态结构体
struct pcg_state {
    uint64_t state;
    uint64_t inc;
};

// 初始化 PCG 状态
void pcg_seed(struct pcg_state *rng, uint64_t seed, uint64_t seq) {
    rng->state = 0U;
    rng->inc = (seq << 1u) | 1u;
    pcg_rand(rng);
    rng->state += seed;
    pcg_rand(rng);
}

// 生成 PCG 随机数
uint32_t pcg_rand(struct pcg_state *rng) {
    uint64_t oldstate = rng->state;
    rng->state = oldstate * 6364136223846793005ULL + rng->inc;
    uint32_t xorshifted = ((oldstate >> 18u) ^ oldstate) >> 27u;
    uint32_t rot = oldstate >> 59u;
    return (xorshifted >> rot) | (xorshifted << ((-rot) & 31));
}

// 测试代码
int main() {
    // 初始化 PCG 状态
    struct pcg_state rng;
    pcg_seed(&rng, 42, 54);

    // 生成随机数
    for (int i = 0; i < 10; i++) {
        printf("%u\n", pcg_rand(&rng));
    }

    return 0;
}
