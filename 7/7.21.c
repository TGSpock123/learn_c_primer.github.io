#include <stdio.h>

int main (void)
{
    int input, sqrtInput, k;

    printf ("please enter a number which is bigger than 0 (q to quit): \n");
    for (; (scanf ("%d", &input) == 1); )
    {
        if (input >= 2)
        {
            for (; input >= 2; input --)
            {
                for (sqrtInput = 2, k = 0; (sqrtInput * sqrtInput) <= input; sqrtInput ++)
                {
                    if (input % sqrtInput == 0)
                    {
                        k = 1;
                        continue;
                    }
                }
                if (k == 0)
                {
                    printf ("%d is prime.\n", input);
                }
            }
        }else if (input == 1)
        {
            printf ("1 is not prime.\n");
        }else
        {
            printf ("Please enter a number bigger than 0.\n");
        }
        printf ("Please enter next number (q to quit): \n");
    }
    printf ("Done.\n");

    return 0;
}