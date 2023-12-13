//
//  9.17.c
//  9_plus
//
//  Created by T G Spock on 2023/12/7.
//

#include <stdio.h>
#include "9.16_17.h"
int interchange (int u, int v)
{
    int temp;
    
    temp = u;
    u = v;
    v = temp;
    next (u);
    
    return v;
}
void next (int c)
{
    printf ("Now x = %d", c);
}
