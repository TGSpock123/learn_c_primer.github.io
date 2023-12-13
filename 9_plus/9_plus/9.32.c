//
//  9.32.c
//  9_plus
//
//  Created by T G Spock on 2023/12/11.
//

#include <stdio.h>
#include "9.32_33_34.h"
int main (void)
{
    float i, j;
    
    printf ("This programme calculates power (q to quit anytime): \n");
    printf ("Now please enter the base number: \n");
    while (scanf ("%g", &i) == 1)
    {
        printf ("Now the exponent number: \n");
        if (scanf ("%g", &j) == 1)
        {
            power_ano (i, j);
            printf ("Please enter another base number: \n");
        }else
        {
            break;
        }
    }
    printf ("Thank you for using. \n");
    
    return 0;
}
