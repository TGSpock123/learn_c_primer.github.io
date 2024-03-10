#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    int ar[10];
    int * restrict restar = (int *) calloc (10, sizeof (int));
    int * par = ar;

    if (restar == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    for (int n = 0; n < 10; n ++)
    {
        par[n] = 0;
        par[n] += 5;
        restar[n] += 5;
        ar[n] += 2;
        par[n] += 3;
        restar[n] += 3;
        printf ("par[%d], %d, ar[%d], %d, restar[%d], %d\n", n, par[n], n, ar[n], n, restar[n]);
    }

    free (restar);
    return 0;
}