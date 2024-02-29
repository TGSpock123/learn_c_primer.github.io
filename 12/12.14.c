#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (void)
{
    srand ((unsigned int) time (0));
    printf ("I've guessed a number from 1 to 10. guess what is it. \n");
    for (int p; ; )
    {
        scanf ("%d", &p);
        if (p != (rand() % 10) + 1)
        {
            printf ("not that one, guess again. \n");
        }else
        {
            break;
        }
    }
    printf ("thank you for playing. \n");

    return 0;
}