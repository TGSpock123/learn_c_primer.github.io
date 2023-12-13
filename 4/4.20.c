#include <stdio.h>

int main(void)
{
    float a_number;
    printf("please enter a number, float better:\n");
    scanf("%f",&a_number);
    printf("%.2f\n",a_number);
    printf("%.1f %.03e %+.3f",a_number,a_number,a_number);

    return 0;
}