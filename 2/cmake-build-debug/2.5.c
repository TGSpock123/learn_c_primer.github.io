#include <stdio.h>
int main (void)
{
    int age;
    int day;

    printf("please enter your age : ");
    scanf("%d" , &age);
    day = age * 365 + age / 4;
    printf("you have spent %d days in your %d years age \n",day,age);

    return 0;
}