//
//  9.37.c
//  9_plus
//
//  Created by T G Spock on 2023/12/12.
//

#include <stdio.h>
#include "9.37_38.h"
int main (void)
{
    int q;
    
    printf ("This programme caculates Fibonacci. \n");
    printf ("Please enter a number (q to quit anytime): \n");
    while (scanf ("%d", &q) == 1)
    {
        if (q < 1)
        {
            printf ("Sorry, can't caculate that. \n");
        }else
        {
            printf ("The %d of Fibonacci is %llu\n", q, Fibonacci (q));
        }
        printf ("Please enter next number. \n");
    }
    printf ("Thank you for using. \n");
    
    return 0;
}
