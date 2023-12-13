#include <stdio.h>

int main(void)
{
    int num = 0;

    for (printf("keep entering numbers\n"); num != 6; )
    {
        scanf("%d", &num);
        printf("no, not that one\n");
    }
    printf("that's what i want\n");

    return 0;
}