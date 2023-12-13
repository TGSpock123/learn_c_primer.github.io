#include <stdio.h>

int main(void)
{
    int n = 5;

    while (n < 7)
    {
        printf("n = %d\n",n);
        n++;
        printf("now n = %d\n",n);
    }
    return 0;
}