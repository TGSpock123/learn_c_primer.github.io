#include <stdio.h>

int main (void)
{
    int count = 0;
    char ch;

    while (count < 10)
    {
        ch = getchar();
        if (ch == 'e')
            continue;
        putchar(ch);
        count ++;
    }
    for (count = 0; count < 10; count ++)
    {
        ch = getchar();
        if (ch == 'e')
            continue;
        putchar(ch);
    }

    return 0;
}