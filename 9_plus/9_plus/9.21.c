//
//  9.21.c
//  9_plus
//
//  Created by T G Spock on 2023/12/8.
//

#include <stdio.h>
#include "9.20_21.h"
void alter (int * q, int * p)
{
    int temp;
    
    temp = *q + *p;
    *q = (*q > *p) ? (*q - *p) : (*p - *q);
    *p = temp;
}
void stars (void)
{
    int i;
    for (i = 1; i <= 55; i ++)
    {
        putchar (STAR);
    }
    putchar ('\n');
}
