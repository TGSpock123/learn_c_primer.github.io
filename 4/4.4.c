#include <stdio.h>
#define PI 3.1415927
int main(void)
{
    float area, circum, radius;

    printf("what's the radius of oyr pizza?\n");
    scanf("%f",&radius);
    area = PI * radius *radius;
    circum = 2.0 * PI * radius;
    printf("your basic pizza parameters are as follows:\n");
    printf("cirmference = %1.2f, area = %1.2f\n",circum,area);

    return 0;
}