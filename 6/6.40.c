#include <stdio.h>

int main (void)
{
    double x[8], y[8];
    int i;

    printf ("please enter 8 numbers:\n");
    for (i = 0; i <= 7; i ++)
        scanf("%lf", &x[i]);
    for (i = 0; i <= 7; i ++)
    {
        printf("the %d number plus up is : ",i + 1);
        y[i] = x[i] + y[i - 1];
        printf("%.2f\n", y[i]);
    }

    return 0;
}