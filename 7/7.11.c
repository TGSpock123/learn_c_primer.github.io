#include <stdio.h>
#define COVERAGE 350
int main (void)
{
    int sqFeet;
    int cans;

    printf("Enter number of square feet to be painted (q to quit): \n");
    while (scanf ("%d", &sqFeet) == 1)
    {
        cans = sqFeet / COVERAGE + ((sqFeet % COVERAGE == 0) ? 0 : 1);
        printf ("You need %d %s of paint. \n", cans, cans == 1 ? "can" : "cans");
        printf ("Please enter next value (q to quit): \n");
    }

    return 0;
}