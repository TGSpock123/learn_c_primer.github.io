#include <stdio.h>
double power (double n, int p);
int main (void)
{
    double x, xpow;
    int exp;

    printf ("enter a number and the positive integer power to witch\n");
    printf ("the number will be raised. enter q to quit. \n");
    while (scanf ("%lf%d", &x, &exp) == 2)
    {
        xpow = power (x, exp);
        printf ("%.3g to power %d is %.5g\n", x, exp, xpow);
        printf ("enter next pair of numbers of q to quit. \n");
    }
    printf ("hope it helpful\n");

    return 0;
}
double power (double n, int p)
{
    double pow = 1;
    int i;

    for (i = 1; i <= p; i++)
        pow *= n;

    return pow;
}