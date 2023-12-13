#include <stdio.h>

int main(void)
{
    int s = 0;
    int t = 0;
    scanf("%d",&s);
    while (t++ <= 10)
    {
        printf("%3d",s);
        s++;
    }
    return 0;
}