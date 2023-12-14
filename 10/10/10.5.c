//
//  10.5.c
//  10
//
//  Created by T G Spock on 2023/12/13.
//

#include <stdio.h>

int main (void)
{
    int try[2][2][2] =
    {
        {
            {1, 2},
            {3, 4}
        },
        {
            {5, 6},
            {7, 8}
        }
    };
    int o = 0, p = 0, q = 0;
    
    for (; o <= 1; o ++)
    {
        for (; p <= 1; p ++)
        {
            for(; q <= 1; q ++)
            {
                printf ("%d\n", try[o][p][q]);
            }
            q = 0;
        }
        p = 0;
    }
    return 0;
}
