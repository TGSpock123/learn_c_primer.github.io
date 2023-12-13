//
//  9.35.c
//  9_plus
//
//  Created by T G Spock on 2023/12/12.
//

#include <stdio.h>
#include "9.35_36.h"
int main (void)
{
    int w;
    float e;
    
    printf ("This programme is for base conversion. \n");
    printf ("Please enter a number to convers (q to quit any time): \n");
    while (scanf("%g", &e) == 1)
    {
        printf ("Now enter the base number (from 2 to 16): \n");
        if (scanf ("%d", &w) == 1)
        {
            if (w >= 2 && w <= 16)
            {
                if (e - (int)e == 0)
                {
                    printf ("The number in ");
                    discr (w);
                    printf ("is ");
                    to_base_n ((int)e, w);
                    putchar ('.');
                    putchar ('\n');
                    printf ("Please enter another number to convers: \n");
                }else
                {
                    printf ("The number in ");
                    discr (w);
                    printf ("is ");
                    to_base_n ((int)e, w);
                    putchar ('.');
                    conv_float (e - (int)e, w);
                    putchar ('.');
                    putchar ('\n');
                    printf ("Please enter another number to convers: \n");
                }
            }else
            {
                printf ("Please enter a number from 2 to 16. \n");
            }
        }
    }
    printf ("Thank you for using. \n");
    
    return 0;
}
