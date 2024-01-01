//
//  10.29.c
//  10_plus_2
//
//  Created by T G Spock on 2023/12/23.
//

#include <stdio.h>
#include "10.25_29.h"
void copy_arr (double ar[], const double m[], int n)
{
    for (int i = 0; i < n; i ++)
    {
        ar[i] = m[i];
    }
}
void copy_ptr (double * str, const double * q, int n)
{
    for (int i = 0; i < n; i ++)
    {
        *str = *q;
        str ++;
        q ++;
    }
}
void copy_ptrs (double ar[], const double * m, const double * p)
{
    for (; m < p; m ++, ar ++)
    {
        *ar = *m;
    }
}
