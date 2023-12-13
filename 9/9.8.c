#include <stdio.h>
unsigned long Fb (unsigned q);

int main (void)
{
    unsigned w;

    printf ("PLease enter a number (q to quit): \n");
    while (scanf ("%u", &w) == 1)
    {
        printf ("The No.%u of Fibonacci is %lu. \n", w, Fb (w));
        printf ("Please enter next number (q to quit): \n");
    }
    printf ("Thank you for using. \n");

	return 0;
}
unsigned long Fb (unsigned q)
{
    if (q > 2)
    {
        return Fb(q - 1) + Fb (q - 2);
    }else
    {
        return 1;
    }
}