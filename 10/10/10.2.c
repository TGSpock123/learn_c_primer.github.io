//
//  10.2.c
//  10
//
//  Created by T G Spock on 2023/12/12.
//

#include <stdio.h>
#define SIZE 4
int main (void)
{
    int no_data[SIZE] = {1492, 1066};
    int i;
    
    printf ("%2s%14s\n",       "i", "no_data[i]");
    for (i = 0; i < SIZE; i ++)
    {
        printf ("%2d%14d\n", i, no_data[i]);
    }
    
    return 0;
}
