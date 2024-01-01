#include "10.26_27.h"
void sort (int * a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
void sort_2 (double * a, double * b)
{
    double temp;

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

    for (int q = 0; q < n; q ++)
    {
        if (i < ar[q])
        {
            i = ar[q];
        }
    }
    return i;
}
double minus (const double ar[], int n)
{
    double i = ar[0], j = ar[0];

    for (int q = 0; q < n; q ++)
    {
        if (i < ar[q])
        {
            i = ar[q];
        }
        if (j > ar[q])
        {
            j = ar[q];
        }
    }

    return (i - j);
}
int maxm (const double ar[], int n)
{
    int i = 0, p = 0;

    for (double q = ar[0]; i < n; i ++)
    {
        if (q < ar[i])
        {
            q = ar[i];
            p = i;
        }
    }

    return p;
}
void bubble_opp (double ar[], int n)
{
    for (int i = 0; i < n - 1; i ++)
    {
        for (int j = 0; j < (n - i - 1); j ++)
        {
            if (ar[j] < ar[j + 1])
            {
                sort_2  (&ar[j], &ar[j + 1]);
            }
        }
    }
}
