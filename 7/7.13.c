#include <stdio.h>

int main (void)
{
    const float MIN = 0.0f, MAX = 100.f;
    float score, total = 0.0f, min = MAX, max = MIN;
    int n = 0;
    printf ("Enter the first score (q to quit): \n");
    while (scanf("%f", &score) == 1)
    {
        if (score < 0 || score > 100)
        {
            printf ("%0.1f is an invalid value. Try again: \n", score);
            continue;
        }
        printf ("Accepting %0.1f: \n", score);
        min = (score < min) ? score : min;
        max = (score > max) ? score : max;
        total += score;
        n ++;
        printf ("Enter next score (q to quit): \n");
    }
    if (n > 0)
    {
        printf ("Average of %d scores is %0.1f. \n", n, total / n);
        printf ("Low = %0.1f, High = %0.1f\n", min, max);
    }else
    {
        printf ("No valid scores were entered. \n");
    }

    return 0;
}