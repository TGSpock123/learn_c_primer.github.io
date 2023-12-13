//
//  9.20.c
//  9_plus
//
//  Created by T G Spock on 2023/12/8.
//

#include <stdio.h>
#include "9.20_21.h"
int main (void)
{
    int x, y;
    
    stars ();
    printf ("Please enter two numbers, x and y (print q to quit): \n");
    printf ("Now enter x: \n");
    while (scanf ("%d", &x) == 1)
    {
        printf ("Now enter y: \n");
        if (scanf ("%d", &y) == 1)
        {
            printf ("x = %d, y = %d. \n", x, y);
            alter (&x, &y);
            printf ("|x - y| = %d, x + y = %d \n", x, y);
            stars ();
            printf ("Please enter next x and y (q to quit): \n");
        }else
        {
            break;
        }
    }
    printf ("Thank you for using. \n");
    stars ();
    
    return 0;
}
