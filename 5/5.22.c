#include <stdio.h>

int main(void)
{
    int ass;
    int bss;
    printf("this programme computes moduli\n");
    printf("enter an integer to serve as the second operand: ");
    scanf("%d",&ass);
    printf("now enter the first operand: ");
    scanf("%d",&bss);
    while(bss > 0)
    {
        printf("%d %% %d is %d\n",bss,ass,bss % ass);
        printf("enter next number for first operand(<= 0 to quit): ");
        scanf("%d",&bss);
    }
    printf("done");
    return 0;
}