//
//  9.33.c
//  9_plus
//
//  Created by T G Spock on 2023/12/11.
//

#include <stdio.h>
#include "9.32_33_34.h"
void power (float i, float j)
{
    float l, k;
    
    l = i;
    if (j > 0)
    {
        if (j - (int)j == 0)
        {
            k = (int)j;
            for ((int)k; (int)k > 1; (int)k --)
                l *= i;
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
            for ((int)k; (int)k > 1; (int)k --)
                l *= i;
            l = 1 / l;
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
