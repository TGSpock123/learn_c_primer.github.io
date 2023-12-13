#include <stdio.h>
#include <ctype.h>

int main (void)
{
    char ch;

    printf ("please enter a sentence :\n");
    while ((ch = getchar ()) != '\n')
    {
        if (isalpha(ch))
        {
            ch = tolower(ch);
            putchar (ch + 1);
        }
        else if (isblank(ch))
            putchar (ch + 37);
        else if (isdigit(ch))
            putchar (ch - 1);
        else if (ispunct(ch))
            putchar (ch + 8);
    }

    return 0;
}