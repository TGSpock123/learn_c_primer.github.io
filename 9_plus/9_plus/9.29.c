//
//  9.29.c
//  9_plus
//
//  Created by T G Spock on 2023/12/9.
//

#include "9.28_29.h"
double avr (double i, double j)
{
    i = 1 / i;
    j = 1 / j;
    i = 1 / ((i + j) / 2);
    
    return i;
}
