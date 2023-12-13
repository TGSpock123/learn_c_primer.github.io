#include <stdio.h>
int main(void)
{
    float a;
    int b;
    printf("please enter inch:\n");
    scanf("%d",&b);
    a = b * 2.54;
    printf("that's %.2f inch\n",a);
    return 0;
}