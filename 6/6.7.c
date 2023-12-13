#include <stdio.h>

int main(void)
{
    long num;
    long sum = 0L;
    int statues;

    printf("please enter next integer to be summed ");
    printf("(q to quit): ");
    statues = scanf("%ld",&num);
    while (statues == 1)
    {
        sum = sum + num;
        printf("please enter next integer (q to quit): ");
        statues = scanf("%ld",&num);
    }
    printf("those integers sum to %ld.\n",sum);
    return 0;
}