//
//  9.22.c
//  9_plus
//
//  Created by T G Spock on 2023/12/8.
//

#include <stdio.h>
#include "9.22_23.h"
int main (void)
{
    int x, y, z, w;
    
    stars ();
    printf ("%s", HELLO);
    printf ("Now enter x: \n");
    while (scanf ("%d", &x) == 1)
    {
        printf ("Now input y: \n");
        if (scanf ("%d", &y) == 1)
        {
            printf ("Now input z: \n");
            if (scanf ("%d", &z) == 1)
            {
                printf ("x = %d, y = %d, z = %d. \n", x, y, z);
                w = pair (x, y, z);
                printf ("The biggest of three is %d. \n", w);
                stars ();
                printf ("Please enter next three value (q to quit). \n");
                printf ("Now enter x: \n");
            }else
            {
                break;
            }
        }else
        {
            break;
        }
    }
    printf ("Thank you for using. \n");
    stars ();
    
    return 0;
}
