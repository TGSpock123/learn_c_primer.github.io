#include <stdio.h>

int main (void)
{
    int quark = 2;

    quark += 5;
    printf ("%d\n", quark);
    quark *= 10;
    printf ("%d\n", quark);
    quark -= 6;
    printf ("%d\n", quark);
    quark /= 8;
    printf ("%d\n", quark);
    quark %= 3;
    printf ("%d\n", quark);

    return 0;
}