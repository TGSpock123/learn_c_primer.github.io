//
//  10.32.c
//  10_plus_2
//
//  Created by T G Spock on 2023/12/24.
//

#include <stdio.h>
#include "10.6_32.h"
void avry (const float ar[][MONTHS], float * a, float * b)
{
    *a = 0;
    *b = 0;
    
    for (int year = 0; year < YEARS; year ++)
    {
        for (int month = 0; month < MONTHS; month ++)
        {
            *b = *b + ar[year][month];
        }
        printf ("%4d %15.1f\n", 2010 + year, *b);
        *a += *b;
    }
}
void avrm (const float ar[][MONTHS], float * b)
{
    *b = 0;
    
    for (int month = 0; month < MONTHS; month ++)
    {
        for (int year = 0; year < YEARS; year ++)
        {
            *b += ar[year][month];
        }
        printf ("%-6.1f", *b / YEARS);
    }
}
