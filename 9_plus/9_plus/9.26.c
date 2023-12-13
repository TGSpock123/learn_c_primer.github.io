//
//  9.26.c
//  9_plus
//
//  Created by T G Spock on 2023/12/9.
//

#include <stdio.h>
#include "9.26_27.h"
int main (void)
{
    char cha;
    int q, p;
    
    printf ("Please enter a character: \n");
    while ((cha = getchar ()) != EOF)
    {
        printf ("Please enter rows: \n");
        if (scanf ("%d", &q) == 1)
        {
            printf ("Please enter columns: \n");
            if (scanf ("%d", &p) == 1)
            {
                putch (cha, q, p);
            }else
            {
                if (getchar () == EOF)
                {
                    break;
                }else
                {
                    printf ("Please enter a number. \n");
                    continue;
                }
            }
        }else
        {
            if (getchar () == EOF)
            {
                break;
            }else
            {
                printf ("Please enter a number. \n");
                continue;
            }
        }
        printf ("Please enter next charater: \n");
        getchar();
    }
    printf ("Thank you for using. \n");
    
    return 0;
}
