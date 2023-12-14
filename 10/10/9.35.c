//
//  9.35.c
//  9_plus
//
//  Created by T G Spock on 2023/12/12.
//

#include <stdio.h>
void to_base_n (int q, int e);
void pri (int te);
void discr (int cv);
void conv_float (float e, int w);
int main (void)
{
    int w;
    float e;
    
    printf ("This programme is for base conversion. \n");
    printf ("Please enter a number to convers (q to quit any time): \n");
    while (scanf("%g", &e) == 1)
    {
        printf ("Now enter the base number (from 2 to 16): \n");
        if (scanf ("%d", &w) == 1)
        {
            if (w >= 2 && w <= 16)
            {
                if (e - (int)e == 0)
                {
                    printf ("The number in ");
                    discr (w);
                    printf ("is ");
                    to_base_n ((int)e, w);
                    putchar ('.');
                    putchar ('\n');
                    printf ("Please enter another number to convers: \n");
                }else
                {
                    printf ("The number in ");
                    discr (w);
                    printf ("is ");
                    to_base_n ((int)e, w);
                    putchar ('.');
                    conv_float (e - (int)e, w);
                    putchar ('.');
                    putchar ('\n');
                    printf ("Please enter another number to convers: \n");
                }
            }else
            {
                printf ("Please enter a number from 2 to 16. \n");
            }
        }
    }
    printf ("Thank you for using. \n");
    
    return 0;
}
void to_base_n (int q, int e)
{
    int temp;
    
    temp = q % e;
    if (q >= e)
    {
        to_base_n(q / e, e);
    }
    pri (temp);
}
void pri (int te)
{
    switch (te)
    {
        case 10:
            putchar ('A');
            break;
        case 11:
            putchar ('B');
            break;
        case 12:
            putchar ('C');
            break;
        case 13:
            putchar ('D');
            break;
        case 14:
            putchar ('E');
            break;
        case 15:
            putchar ('F');
            break;
        default:
            printf ("%d", te);
            break;
    }
}
void discr (int cv)
{
    switch (cv)
    {
        case 2:
            printf ("binary ");
            break;
        case 3:
            printf ("ternary ");
            break;
        case 4:
            printf ("quaternary ");
            break;
        case 5:
            printf ("quinary ");
            break;
        case 6:
            printf ("hexadecimal ");
            break;
        case 7:
            printf ("base 7 ");
            break;
        case 8:
            printf ("octal ");
            break;
        case 9:
            printf ("base 9 ");
            break;
        case 10:
            printf ("decimal ");
            break;
        case 11:
            printf ("base 11 ");
            break;
        case 12:
            printf ("base 12 ");
            break;
        case 13:
            printf ("base 13");
            break;
        case 14:
            printf ("base 14");
            break;
        case 15:
            printf ("base 15");
            break;
        case 16:
            printf ("hexadecimal ");
            break;
    }
}
void conv_float (float e, int w)
{
    float temp = e;
    int time;

    for (time = 0; time <= 5 ; time ++)
    {
        if (temp == 0)
        {
            break;
        }else
        {
            temp = temp * w;
            pri ((int) temp);
            temp = temp - (int) temp;
        }
    }
}
