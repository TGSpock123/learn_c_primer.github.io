#include <stdio.h>
#include <iso646.h>
#define PERIOD '.'

int main (void)
{
    char ch;
    int charcount = 0;

    while ((ch = getchar()) not_eq  PERIOD)
    {
        charcount ++;
        if (ch == '"' or ch == '\'')
        {
            charcount --;
        }
    }
    printf ("There are %d non - quote characters.\n", charcount);

    return 0;
}