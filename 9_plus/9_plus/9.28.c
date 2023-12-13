//
//  9.28.c
//  9_plus
//
//  Created by T G Spock on 2023/12/9.
//

#include "9.28_29.h"
int main (void)
{
    double i, j;
    
    printf ("Please enter two numbers, i and j (q to quit): \n");
    printf ("Now enter i: \n");
    while (scanf ("%lg", &i) == 1)
    {
        printf ("Now enter j: \n");
        if (scanf ("%lg", &j) == 1)
        {
            printf ("i = %lg, j = %lg. \n", i, j);
            printf ("The harmonic mean of i and j is %lg. \n", avr (i, j));
            printf ("Please enter next two numbers, q to quit: \n");
        }else
        {
            break;
        }
    }
    printf ("Thank you for using. \n");
}
