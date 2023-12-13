#include <stdio.h>
int main(void)
{
    int scores = 1;
    int dimes = 1;
    int bunnies = 1;
    float time = 1;
    int reduce = 47;
    int x = 1;
    int y = 1;
    int scores1 = 1;
    int dimes1 = 1;
    int bunnies1 = 1;
    float time1 = 1;
    int reduce1 = 47;
    int x1 = 1;
    int y1 = 1;

    printf("%d = %d\n",scores += 20, scores1 = scores1 + 20);
    printf("%d = %d\n",dimes -= 20, dimes1 = dimes1 - 20);
    printf("%d = %d\n",bunnies *= 20, bunnies1 = bunnies1 * 20);
    printf("%f = %f\n",time /= 20, time1 = time1 / 20);
    printf("%d = %d\n",reduce %= 3, reduce1 = reduce1 % 3);
    printf("%d = %d\n",x *= 3 * y + 12, x1 = x1 * (3 * y1 + 12));

    return 0;
}