//
//  10.1.c
//  10
//
//  Created by T G Spock on 2023/12/12.
//

#include <stdio.h>
#define MONTH 12
int main (void)
{
    int days[12] = {31, 28, [4] = 31, 30, 31, [1] = 29};
    int index;
    
    for (index = 0; index < MONTH; index ++)
    {
        printf ("Month %2d has %2d days. \n", index + 1, days[index]);
    }
    
    return 0;
}
