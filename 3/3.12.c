#include <stdio.h>
int main(void)
{
    float salary;
    printf("\aenter your desired monthly salary:\n");
    printf("$______\b\b\b\b\b\b");
    scanf("%f",&salary);
    printf("\n\t$%.2f a month is $%.2f a year.",salary,salary * 12);
    printf("\rGee!\n");
    return 0;
}