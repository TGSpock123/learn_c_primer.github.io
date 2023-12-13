#include <stdio.h>

int main(void)
{
    float num = 1;
    while (num<2)
    {
        printf("%.3f %.6f\n",num,num * num);
        num = num + 0.1;
    }
    return 0;
}