#include "10.26_27.h"
void sort (int * a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
void bubble (int ar[], int n)
{
    for (int i = 0; i < n - 1; i ++)
    {
        for (int j = 0; j < (n - i - 1); j ++)
        {
            if (ar[j] > ar[j + 1])
            {
                sort (&ar[j], &ar[j + 1]);
            }
        }
    }
}
int max (const int ar [], int n)
{
    int i = ar[0];

    for (int q = 0; q < n - 1; q ++)
    {
        if (i < ar[q])
        {
            i = ar[q];
        }
    }
    return i;
}
double minus (double ar[], int n)
{
    double i = ar[0];

    for (int q = 0; q < n - 1; q ++)
    {
        if (i < ar[q])
        {
            i = ar[q];
        }
        if (ar[0] > ar[q])
        {
            ar[0] = ar[q];
        }
    }

    return (i - ar[0]);
}
int maxm (const double ar[], int n)
{
    int i = 0, p = 0;

    for (double q = ar[0]; i < n - 1; i ++)
    {
        if (q < ar[i])
        {
            q = ar[i];
            p = i;
        }
    }

    return p;
}
