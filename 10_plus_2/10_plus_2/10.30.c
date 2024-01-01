//
//  10.30.c
//  10_plus_2
//
//  Created by T G Spock on 2023/12/24.
//

#include <stdio.h>
#include "10.30_31.h"
int main (void)
{
    int q = 3, p = 5;
    double qwer[3][5] = {
        {1.1, 2.2, 3.3, 4.4, 5.5}, {6.6, 7.7, 8.8, 9.9, 10.01}, {11.12, 12.13, 13.14, 14.15, 15.16}
    };
    double tyui[q][p];
    double opas[q][p];
    
    ons (4, "qwer", 3, 5, qwer);
    cpy (3, 5, tyui, qwer);
    ons (4, "tyui", 3, 5, tyui);
    pluz (3, 5, tyui, qwer, opas);
    ons (4, "opas", 3, 5, opas);
    tims (3, 5, qwer);
    ons (8, "now qwer", 3, 5, qwer);
    
    return 0;
}
