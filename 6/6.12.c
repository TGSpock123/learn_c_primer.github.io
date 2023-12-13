#include <stdio.h>

char main(void)
{
    int secs;

    for(secs = 5; secs > 0; secs --)
        printf("%d seconds left\n",secs);
    printf("boom");

    return 0;
}