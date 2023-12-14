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
    double q[M];
    
    printf ("Please printf 3 numbers, this programe will pair them (enter q to quit anytime): \n");
    printf ("Now the first one: \n");
    while (scanf ("%lf", &q[M - 3]) == 1)
    {
        printf ("Now the second one: \n");
        if (scanf ("%lf", &q[M - 2]) == 1)
        {
            printf ("Now the third one: \n");
            if (scanf ("%lf", &q[M - 1]) == 1)
            {
                pair (q, M);
                printf ("%lf > %lf > %lf. \n", q[0], q[1], q[2]);
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
