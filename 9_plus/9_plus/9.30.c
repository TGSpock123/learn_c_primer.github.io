//
//  9.30.c
//  9_plus
//
//  Created by T G Spock on 2023/12/10.
//

#include <stdio.h>
#include "9.30_31.h"
int main (void)
{
    double q, w, e;
    
    printf ("Please printf 3 numbers, this programe will pair them (enter q to quit anytime): \n");
    printf ("Now the first one: \n");
    while (scanf ("%lg", &q) == 1)
    {
        printf ("Now the second one: \n");
        if (scanf ("%lg", &w) == 1)
        {
            printf ("Now the third one: \n");
            if (scanf ("%lg", &e) == 1)
            {
                pair (&q, &w, &e);
                printf ("%lg > %lg > %lg. \n", q, w, e);
                printf ("Please enter another three numbers (still q to quit): \n");
                printf ("Now the first one: \n");
            }else
            {
                break;
            }
        }else
        {
            break;
        }
    }
    printf ("Thank you for using. \n");
    
    return 0;
}
