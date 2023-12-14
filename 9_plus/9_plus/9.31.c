//
//  9.31.c
//  9_plus
//
//  Created by T G Spock on 2023/12/10.
//

#include <stdio.h>
#include "9.30_31.h"
void pair(double x[], int len)
{
    int i, j;
    double temp;
    for (i = 0; i < len - 1; i++)
    {
        for (j = 0; j < len - 1; j++)
        {
            if (x[j] > x[j + 1])
            {
                temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }
        }
    }
}


