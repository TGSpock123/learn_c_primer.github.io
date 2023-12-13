#include <stdio.h>

int main (void)
{
    char ch;
    int t = 0;

    printf ("Please enter a sentence, end with #: \n");
    for (; (ch = getchar()) != '#';)
    {
        switch (ch)
        {
            case '.':
                putchar ('!');
                t ++;
                break;
            case '!':
                putchar (ch);
                putchar (ch);
                t ++;
                break;
            default:
                putchar (ch);
                break;
        }
    }
    printf ("\nThere are %d times convers", t);

    return 0;
}