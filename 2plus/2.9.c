#include <stdio.h>

int main(void)
{
    int toes;
    int sqrt_toes;
    int cub_toes;

    toes = 10;
    sqrt_toes = toes * toes;
    cub_toes = sqrt_toes * toes;
    printf("你有%d个脚趾头，这个数的平方是%d,立方事%d",toes,sqrt_toes,cub_toes);
    return 0;
}