#include <stdio.h>
#define SPACE ' '

int main (void)
{
    char ch;

    printf("please enter a sentence: \n");
    for (ch = getchar (); ch != '\n';ch = getchar ())
    {
        if (ch == SPACE)
        {
            putchar (ch);
        }else
        {
            putchar (ch + 1);
        }
    }

    return 0;
}