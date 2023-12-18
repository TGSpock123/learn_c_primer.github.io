#include <stdio.h>
#include "10.9_10.h"
int main (void)
{
    int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
    long answer;

    answer = sum (marbles, SIZE);
    printf ("The total number of marbles is %ld. \n", answer);
    printf ("The size of marbles is %zd bytes with %zd element. \n", sizeof marbles,
            sizeof marbles / sizeof marbles[0]);
    printf ("The total number of marbles is %d, in another method. \n", sump (marbles, marbles + SIZE));


    return 0;
}