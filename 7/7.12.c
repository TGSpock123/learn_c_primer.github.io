#include <stdio.h>
#include <string.h>

int main (void)
{
    long double i, l = 1, o = 0;
    char c[10];
    int k;

    printf ("please enter height : \n");
    scanf ("%Lf", &i);
    printf ("please enter weight : \n");
    scanf ("%s", c);
    for (k = strlen(c) - 1; k >= 0; k --)
    {
        l *= 26;
        o += (((int)c[k] - 64) * l) / 26;
    }
    printf("square is %.2Lf cm2. \n", i * o);

    return 0;
}