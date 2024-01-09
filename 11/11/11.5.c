//
//  11.5.c
//  11
//
//  Created by T G Spock on 2024/1/3.
//

#include <stdio.h>
#define SLEN 40
#define LIM 5
int main (void)
{
    const char * myTalents[LIM] =
    {
        "Adding numbers swiftly",
        "Multiplying accurately",
        "Stashing data",
        "Following instructions to the letter",
        "Understanding C language"
    };
    char yourTalents[LIM][SLEN] =
    {
        "Walking in a strait line",
        "Sleeping",
        "Watching television",
        "Mailing letters",
        "Reading mail"
    };
    int i;
    
    puts ("Let's compare talents. ");
    printf ("%-36s %-25s\n", "My talents", "Your talents");
    for (i = 0; i < LIM; i ++)
    {
        printf ("%-36s %-25s\n", myTalents[i], yourTalents[i]);
    }
    putchar ('\n');
    printf ("Size of myTalents: %zd, size of yourTalents: %zd \n", sizeof (myTalents), sizeof (yourTalents));
    
    return 0;
}
