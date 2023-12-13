//
//  9.31.c
//  9_plus
//
//  Created by T G Spock on 2023/12/10.
//

#include <stdio.h>
#include "9.30_31.h"
void pair (double * x, double * y, double * z)
{
    double a, b;
    
    b = (*x > *y) ? *x : *y;
    *x = (*x > *y) ? *y : *x;
    a = (b > *z) ? b : *z;
    b = (b > *z) ? *z : b;
    *x = (*x > *z) ? *z : *x;
    *y = b;
    *z = a;
}
