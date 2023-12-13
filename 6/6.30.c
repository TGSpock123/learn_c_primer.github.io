#include <stdio.h>

int main (void)
{
    int i, j, list [ 10 ];

    for (i = 1; i <= 9; i++)
    {
        list [ i ] = 2 * i + 3;
        for ( j = 1; j <= 1; j++)
            printf ("   %d", list [ j ]);
    }

    return 0;
}