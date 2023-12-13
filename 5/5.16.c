#include <stdio.h>

int main(void)
{
    int guest = 0;
    while (++guest < 10)
    {
        printf("%d\n",guest);
    }
    return 0;
}