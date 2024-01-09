//
//  11.14.c
//  11
//
//  Created by T G Spock on 2024/1/8.
//

#include <stdio.h>
int main (void)
{
    char line[8];
    int i;
    
    printf ("Now puts() speaking: \n");
    while (gets (line) && line[0] != EOF)
    {
        i = 0;
        puts (line);
    }
    printf ("Now fputs() speaking: \n");
    while (fgets (line, 8, stdin) && line[0] != '\n')
    {
        i = 0;
        fputs (line, stdout);
    }
    
    return 0;
}
