#include <stdio.h>
int main(void)
{
    float cm;
    int inch;
    printf("please inter inch number:\n");
    scanf("%d",&inch);
    getchar();
    cm = 2.54 * inch;
    printf("%d inch is %.2f cm\n",inch,cm);
    return 0;
}