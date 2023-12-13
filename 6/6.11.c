#include <stdio.h>
#include <math.h>
int main(void)
{
    int num;

    printf("    n    n cubed\n");
    for(num = 1; num <= 6; num++)
        printf("%5d %5f\n",num,sqrt(num));
    printf("num is %d finally",num);

    return 0;
}