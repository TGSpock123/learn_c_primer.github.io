//
//  9.38.c
//  9_plus
//
//  Created by T G Spock on 2023/12/12.
//

#include <stdio.h>
#include "9.37_38.h"
long long unsigned Fibonacci (int t)
{
    int i_0 = 1, i_1 = 1, i = 1;
    
    if (t >= 3)
    {
        for (; t > 2; t --)
        {
            i = i_1 + i_0;
            i_0 = i_1;
            i_1 = i;
        }
    }
    
    return i;
}
