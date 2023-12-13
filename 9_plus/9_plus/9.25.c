//
//  9.25.c
//  9_plus
//
//  Created by T G Spock on 2023/12/8.
//

#include <stdio.h>
#include "9.24_25.h"
void welcome (void)
{
    stars ();
    printf ("%s", HELLO);
    printf ("%-25s%s\n", ONE, TWO);
    printf ("%-25s%s\n", THREE, FOUR);
    stars ();
    printf ("Enter the number of your choise: \n");
}
void stars (void)
{
    int f;
    
    for (f = strlen (HELLO) + 2; f > 0; f --)
    {
        putchar ('*');
    }
    putchar ('\n');
}
int dosth (int x, int y)
{
    int z;
    
    if (scanf ("%d", &z) == 1)
    {
        if (z >= x && z <= y)
        {
            return z;
        }else
        {
            printf ("Please enter a number from 1 to 4. \n");
            welcome ();
            dosth(x, y);
        }
    }else
    {
        z = 4;
    }
    
    return z;
}
