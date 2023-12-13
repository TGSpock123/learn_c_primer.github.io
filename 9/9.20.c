#include <stdio.h>
#include "9.20_21.h"
int main (void)
{
    int x, y;
    
    printf ("Please enter two numbers, x and y (print q to quit): \n");
    printf ("Now enter x: ");
    while (scanf ("%d", &x) == 1)
    {

        printf ("Now x = %d, y = %d. \n", x, y);
        alter (&x, &y);
        printf ("|x - y| = %d, x + y = %d", x, y);
        printf ("Please enter next x and y (q to quit): \n");
    }
    printf ("Thank you for using. \n");
    
    return 0;
}
