#include <stdio.h>
#include <math.h>
int main (void)
{
    double k , i;

    printf ("watch this: \n");
    printf ("1 + 1 / 2 + 1 / 3 + 1 / 4 + 1 / 5 + ... + 1 / n = \n");
    for (i = 1, k = 1; i <= 1000; k = k + 1 / (i + 1), i++)
        printf("%f when i = %.0f\n", k, i);
    printf ("1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 /5 - ... +- 1 / n = \n");
    for (i = 1, k = 1; i <= 1000; k = k + (1 / (i + 1) * pow(-1 , i)), i++)
        printf("%f when i = %.0f\n", k, i);


    return 0;
}