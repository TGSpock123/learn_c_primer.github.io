//
//  9.16.c
//  9_plus
//
//  Created by T G Spock on 2023/12/7.
//

#include <stdio.h>
#include "9.16_17.h"
int main (void)
{
    int x = 5, y = 10;
    
    printf ("Origninally x = %d and y = %d. \n", x, y);
    y = interchange (x, y);
    printf (" and y = %d. \n", y);
    
    return 0;
}
