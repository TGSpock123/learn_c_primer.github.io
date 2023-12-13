//
//  9.24.c
//  9_plus
//
//  Created by T G Spock on 2023/12/8.
//

#include <stdio.h>
#include "9.24_25.h"
int main (void)
{
    int x = 1, y = 4, w;
    
    do
    {
        welcome ();
        w = dosth(x, y);
        switch (w)
        {
            case 1: printf ("Wait a minute, I'm learning how to copy. \n");
                printf("What else? \n");
                break;
            case 2: printf ("Wait a minute, I'm learning how to move. \n");
                printf("What else? \n");
                break;
            case 3: printf ("Wait a minute, I'm learning how to remove. \n");
                printf("What else? \n");
                break;
        }
    }while (w != 4);
    printf("Thank you for using. \n");
    
    return 0;
}
