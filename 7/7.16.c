#include <stdio.h>
#include <ctype.h>

int main (void)
{
    char ch;

    printf ("Give me a letter of alphabet, \n"
           "and I will give an animal name beginning with the letter. \n");
    printf ("Please type in a letter; type # to end my act.\n");
    while ((ch = getchar()) != '#')
        if ('\n' == ch)
            continue;
    if (islower(ch))
        switch (ch)
        {
            case 'A':
            case 'a':
                printf ("argali, a wild sheep of Asia. \n");
                break;
            case 'b':
                printf ("babirusa, a wild pig of Malay. \n");
                break;
            case 'c':
                printf ("conti, racoonlike mammal. \n");
                break;
            case 'd':
                printf ("ghffduhf");
            default:
                break;
        }
    return 0;
}