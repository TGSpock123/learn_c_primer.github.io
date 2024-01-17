//
//  11.16.c
//  11
//
//  Created by T G Spock on 2024/1/9.
//

#include <stdio.h>
#include "11.15_16.h"
void put1 (const char * string)
{
    while (*string)
    {
        putchar (*string);
        string ++;
    }
}
int put2 (const char * string)
{
    int i = 0;
    
    while (*string)
    {
        putchar (*string);
        string ++;
        i ++;
    }
    putchar ('\n');
    
    return i;
}
