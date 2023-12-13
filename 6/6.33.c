#include <stdio.h>

int main (void)
{
    int i;
    char ch;

    for (i = 0, ch = 'A'; i < 4; i ++, ch += 2 * 1)
        printf("%c", ch);
}