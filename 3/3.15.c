#include <stdio.h>
int main(void)
{
    long double s;
    printf("please enter a float: \n");
    scanf("%Lf", &s);
    printf("fixed-pointed type: %Lf\n",s);
    printf("exponential type: %Le\n",s);
    printf("p type: %La\n",s);

    return 0;
}