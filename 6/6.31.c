#include <stdio.h>

int main (void)
{
    int x , y;
    int row = 4;
    int s = 6;
    for (x = 1; x <= row; x++)
    {
        for (y = 1; y <= s; y++)
            printf ("$");
        printf ("\n");
    }

    return 0;
}