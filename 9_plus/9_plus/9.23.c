//
//  9.23.c
//  9_plus
//
//  Created by T G Spock on 2023/12/8.
//

#include <stdio.h>
#include "9.22_23.h"

int pair (int x, int y, int z)
{
    int temp;
    
    temp = (x > y) ? x : y;
    temp = (temp > z) ? temp : z;
    
    return temp;
}
void stars (void)
{
    int q;
    
    q = strlen (HELLO);
    for (q = q + 2; q > 0; q --)
    {
        putchar ('*');
    }
    putchar ('\n');
}
