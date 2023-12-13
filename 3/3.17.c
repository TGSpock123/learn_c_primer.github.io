#include <stdio.h>
int main(void)
{
    int a;
    double b = 3.0e23;
    double c;
    printf("please enter qua:\n");
    scanf("%d", &a);
    c = b * a * 950;
    printf("there are %.0e H2O in %d qua water\n",c,a);
    return 0;
}