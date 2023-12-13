#include <stdio.h>
int main(void)
{
    char name[40];
    const double CASH = 20000.99999;
    printf("please enter your name:\n");
    scanf("%s",name);
    printf("the %s family just may be $%.5f dollars richer\n",name,CASH);

    return 0;
}