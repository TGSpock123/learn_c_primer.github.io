#include <stdio.h>

int main (void)
{
    int x, y;

    printf ("please enter min lim: \n");
    scanf ("%d", &x);
    printf ("please enter max lim: \n");
    scanf ("%d", &y);
    printf("  number  number ^ 2  number ^ 3\n");
    for (; x <= y; x ++)
        printf("%7d %12d %11d\n", x, x * x, x * x *x);

    return 0;
}