#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define HUND 100
int exchange (int * fir, int * sec);
int main (void)
{
    srand ((unsigned int) time (0));

    int * ar = (int *) calloc (HUND, sizeof (int));
    for (int i = 0; i < HUND; i ++)
    {
        ar[i] = rand() % 10 + 1;
    }
    for (int j = 0; j < HUND - 1; j ++)
    {
        for (int p = j + 1; p <= HUND - 1; p ++)
        {
            if (ar[p] > ar[j])
            {
                printf ("exchange() called %d times. \n", exchange(ar + p, ar + j));
            }
        }
    }
    for (int i = 0; i < 100; i ++)
    {
        printf ("%d: %d\n", i + 1, ar[i]);
    }

    free (ar);
    return 0;
}
int exchange (int * fir, int * sec)
{
    int temp;
    static int time = 0;

    temp = *fir;
    *fir = *sec;
    *sec = temp;
    time ++;

    return time;
}