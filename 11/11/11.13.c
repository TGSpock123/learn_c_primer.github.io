//
//  11.13.c
//  11
//
//  Created by T G Spock on 2024/1/8.
//

#include <stdio.h>
int main (void)
{
    char side_a[] = "Side A";
    char dont[] = {'W', 'O', 'W', '!'};
    char side_b[] = "Side B";
    
    printf ("side_a = %p, dont = %p, side_b[] = %p\n", side_a, dont, side_b);
    puts (dont);
    
    return 0;
}
