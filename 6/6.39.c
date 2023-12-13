#include <stdio.h>
#include <math.h>

int main (void)
{
    int i, x[8];
    for (i = 0; i <= 7; i++)
        x[i] = pow (2, i + 1);
    i = 0;
    do
    {
        printf ("2 ^ %d = %d\n", i + 1, x[i]);
        i ++;
    }
    while(i <= 7);

    return 0;
}