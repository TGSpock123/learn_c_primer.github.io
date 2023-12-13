//
//  9.12.c
//  9_plus
//
//  Created by T G Spock on 2023/12/6.
//

#include <stdio.h>
#include "9.12_13.h"
int main (void)
{
    unsigned p;
    
    printf ("Please enter a number (q to quit): \n");
    while (scanf("%u", &p) == 1)
    {
        printf ("The No.%u of fib is %lu. \n", p, fb (p));
        printf ("Please enter next number (q to quit): \n");
    }
    printf ("Thank you for using. \n");
    
    return 0;
}
