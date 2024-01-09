//
//  11.7.c
//  11
//
//  Created by T G Spock on 2024/1/3.
//

#include <stdio.h>
#define STLEN 81
int main (void)
{
    char words[STLEN];
    
    puts ("Enter a string, please. ");
    gets (words);
    printf ("Your string twice: \n");
    printf ("%s \n", words);
    puts (words);
    puts ("Done. ");
    
    return 0;
}
