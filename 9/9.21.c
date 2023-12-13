#include <stdio.h>
#include "9.20_21.h"
void alter (int * q, int * p)
{
    int temp;
    
    temp = *q + *p;
    *q = (*q > *p) ? (*q - *p) : (*p - *q);
    *p = temp;
}
