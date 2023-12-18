#include <stdio.h>
#include "10.9_10.h"
int sum (int ar[], int n)
{
    int i;
    int total = 0;

    for (i = 0; i < n; i ++)
    {
        total += ar[i];
    }
    printf ("The size of ar is %zd bytes. \n", sizeof ar);

    return total;
}
int sump (int * start, int * end)
{
    int total = 0;

    while (start < end)
    {
        total += *start;
        start ++;
    }

    return total;
}