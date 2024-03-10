#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (void)
{
    int times[10];
    srand ((unsigned int) time (0));

    for (int i = 0; i < 10; i ++)
    {
        times[i] = 0;
    }
    for (int i = 0; i < 100; i ++)
    {
        times[rand() % 10] ++;
    }
    for (int i = 0; i < 10; i ++)
    {
        printf ("%d has showed %d times. \n", i + 1, times[i]);
    }

    return 0;
}