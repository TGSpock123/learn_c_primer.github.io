#include <stdio.h>

int main (void)
{
    int k = 0;
    char ch, prev;

    while (ch != '#'){
        prev = ch;
        ch = getchar ();
        if (prev == 'e' && ch == 'i')
            k ++;
    }
    printf ("\n%d", k);

    return 0;
}