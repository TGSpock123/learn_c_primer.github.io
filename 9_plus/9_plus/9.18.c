//
//  9.18.c
//  9_plus
//
//  Created by T G Spock on 2023/12/7.
//

#include <stdio.h>
#include "9.18_19.h"
int main (void)
{
    int x = 5, y = 10;
    
    printf ("Orignally x = %d and y = %d. \n", x, y);
    interchange (&x, &y);
    printf ("Now x = %d and y = %d. \n", x, y);
    
    return 0;
}
