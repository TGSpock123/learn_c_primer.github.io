#include <stdio.h>
int main (void)
{
    unsigned long long int x , y;

    printf("when x =              y =\n");
    for(x =1, y = 1; x <= 64; x += 1, y += y * 2)
        printf("%llu                            %llu\n",x,y);

    return 0;
}