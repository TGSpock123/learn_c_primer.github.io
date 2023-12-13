//
//  9.34.c
//  9_plus
//
//  Created by T G Spock on 2023/12/11.
//

#include <stdio.h>
#include "9.32_33_34.h"
void power_ano (float i, float j)
{
    float l;
    int k;
    
    l = i;
    if (j > 0)
    {
        if (j - (int)j == 0)
        {
            k = (int)j;
            l = tru_power (i, l, k);
            printf ("%.2f ^ %.2f = %lg. \n", i, j, l);
        }else
        {
            printf("wait, I' m learing\n");
        }
    }else if (j < 0)
    {
        if (j - (int)j == 0)
        {
            k = - (int)j;
            l = 1 / tru_power (i, l, k);
            printf ("%.2f ^ %.2f = %lg. \n", i, j, l);
        }else
        {
            printf("wait, I' m learing\n");
        }
    }else
    {
        l = 0;
        printf ("%.2f ^ %.2f = %lg. \n", i, j, l);
    }
}
float tru_power (float p, float o, int f)
{
    if (f > 1)
    {
        o = tru_power (p, o, f - 1) * p; //不能使用f --, 为什么呢? 
    }
    
    return o;
}
