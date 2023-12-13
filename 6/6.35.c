#include <stdio.h>
#define SIZE 8

int main (void)
{
    int index, s[SIZE];

    printf ("please enter %d numbers: \n", SIZE);
    for (index = 0; index < SIZE; index ++)
        scanf("%d",&s[index]);
    printf ("these are numbers (upset): \n");
    for (index = index - 1; index >= 0; index --)
        printf("%2d",s[index]);

    return 0;
}