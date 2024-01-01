//
//  10.last_2.c
//  10_plus_2
//
//  Created by T G Spock on 2023/12/24.
//

#include <stdio.h>
#include "10.last.h"
void ptr (int q, char wods [q], int n, int m, double ar[n][m])
{
    for (int i = 0; i < n; i ++)
    {
        for (int j = 0; j < m; j ++)
        {
            printf ("%s[%d][%d] = %lg\n",wods, i, j, ar[i][j]);
        }
        putchar('\n');
    }
}
void entr (int n, int m, double ar[n][m])
{
    for (int i = 0; i < n; i ++)
    {
        printf ("Please enter five numbers \n");
        for (int j = 0; j < m; j ++)
        {
            scanf ("%lg", &ar[i][j]);
        }
    }
    ptr (4, "qwer", 3, 5, ar);
}
void gavr (int n, int m, double ar[n][m])
{
    double avrg[n];
    
    for (int i = 0; i < n; i ++)
    {
        for (int j = 0; j < m; j ++)
        {
            avrg[i] += ar[i][j];
        }
        printf ("The average of qwer[%d] is %lg \n", i, avrg[i] / m);
    }
    putchar ('\n');
}
void aavr (int n, int m, double ar[n][m])
{
    double avrg = 0;
    
    for (int i = 0; i < n; i ++)
    {
        for (int j = 0; j < m; j ++)
        {
            avrg += ar[i][j];
        }
    }
    printf ("The average of all qwer is %lg \n", avrg / (n * m));
    putchar ('\n');
}
double maxm (int n, int m, double ar[n][m])
{
    double temp = ar[0][0];
    
    for (int i = 0; i < n; i ++)
    {
        for (int j = 0; j < m; j ++)
        {
            if (temp < ar[i][j])
            {
                temp = ar[i][j];
            }else
            {
                continue;
            }
        }
    }
    
    return temp;
}
