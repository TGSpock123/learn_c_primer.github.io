#include <stdio.h>
#include "10.13_14.h"
void show_array (const double ar[], int n)
{
    int i;

    for (i = 0; i < n; i ++)
    {
        printf ("%8.3f", ar[i]);
    }
    putchar ('\n');
}
void mult_array (double ar[], int n, double mult)
{
    int i;

    for (i = 0; i < n; i ++)
    {
        ar[i] *= mult;
    }
}