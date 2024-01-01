//
//  10.31.c
//  10_plus_2
//
//  Created by T G Spock on 2023/12/24.
//

#include <stdio.h>
#include "10.30_31.h"
void ons (int c, char str[c], int n, int m, double ar[n][m])
{
    for (int w = 0; w < n; w ++)
    {
        for (int e = 0; e < m; e ++)
        {
            printf ("%s[%d][%d] = %g \n", str, w, e, ar[w][e]);
        }
    }
}
void cpy (int n, int m, double ar[n][m], double ar_2[n][m])
{
    for (int i = 0; i < n; i ++)
    {
        for (int j = 0; j < m; j ++)
        {
            ar[i][j] = ar_2[n - 1 - i][m - 1 - j];
        }
    }
}
void pluz (int n, int m, double ar[n][m], double ar_2[n][m], double ar_3[n][m])
{
    for (int i = 0; i < n; i ++)
    {
        for (int j = 0; j < m; j ++)
        {
            ar_3[i][j] = ar_2[i][j] + ar[i][j];
        }
    }
}
void tims (int n, int m, double ar[n][m])
{
    for (int i = 0; i < n; i ++)
    {
        for (int j = 0; j < m; j ++)
        {
            ar[i][j] = ar[i][j] * 2;
        }
    }
}
