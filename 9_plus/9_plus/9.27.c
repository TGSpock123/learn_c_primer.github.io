//
//  9.27.c
//  9_plus
//
//  Created by T G Spock on 2023/12/9.
//

#include <stdio.h>
#include "9.26_27.h"
void putch (char ch, int i, int j)
{
    int q = j --, p;
    
    for (p = i; p > 0; p --)
    {
        putchar(ch);
    }
    putchar('\n');
    if (q > 1)
    {
        putch(ch, i, j);
    }
}
