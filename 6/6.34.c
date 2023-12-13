#include <stdio.h>

int main (void)
{
    char i, j, k, l;

    printf ("please enter a character: \n");
    scanf ("%c", &k);
    for (i = 33; i <= k; i ++)
    {
        printf("%*c",k - i + 1, ' ');
        for(l = i; l > 33 ; l --)
        {
            printf("%c", l);
        }
        for (j = 33; j <= i; j++)
        {
            printf("%c", j);
        }
        printf ("\n");
    }

    return 0;
}