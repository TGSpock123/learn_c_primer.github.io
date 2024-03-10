#include <stdio.h>

int main (void)
{
    float i, j, k, l;

    printf ("please enter the base number: \n");
    scanf ("%f", &i);
    printf ("please enter the exponent number: \n");
    scanf ("%f", &j);
    l = i;
    if (j > 0)
    {
        if (j - (int)j == 0)
        {
            k = (int)j;
            for ((int)k; (int)k > 1; (int)k --)
                l *= i;
        }else
        {
            printf("wait, I' m learing\n");
        }
    }else if (j < 0)
    {
        if (j - (int)j == 0)
        {
            k = - (int)j;
            for ((int)k; (int)k > 1; (int)k --)
                l *= i;
            l = 1 / l;
        }else
        {
            printf("wait, I' m learing\n");
        }
    }else
    {
        l = 1;
    }
    printf ("%.2f ^ %.2f = %f", i, j, l);

    return 0;
}