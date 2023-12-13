#include <stdio.h>

int main (void)
{
    char ch;
    int k = 1;

    printf ("Please enter a sentence, end with '#': \n");
    for (; (ch = getchar()) != '#'; k ++)
    {
        if (k == 8)
        {
            putchar(ch);
            printf ("%5d     ", ch);
            putchar('\n');
            k = 0;
        }else
        {
            putchar(ch);
            printf ("%5d     ", ch);
        }
        if (ch == '\n')
            continue;
    }

    return 0;
}