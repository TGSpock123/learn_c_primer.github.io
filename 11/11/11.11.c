//
//  11.11.c
//  11
//
//  Created by T G Spock on 2024/1/8.
//

#include <stdio.h>
int main (void)
{
    char name1[11], name2[11];
    int count;
    
    printf ("Please enter 2 names.\n");
    count = scanf ("%5s %10s", name1, name2);
    printf ("I read %d names %s and %s.\n", count, name1, name2);
    
    return 0;
}
