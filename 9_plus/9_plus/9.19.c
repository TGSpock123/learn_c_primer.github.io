//
//  9.19.c
//  9_plus
//
//  Created by T G Spock on 2023/12/7.
//

#include <stdio.h>
#include "9.18_19.h"
void interchange (int * u, int * v)
{
    int temp;
    
    temp = *u;
    *u = *v;
    *v = temp;
}
