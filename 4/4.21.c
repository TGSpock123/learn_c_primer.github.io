#include <stdio.h>

int main(void)
{
    float height;
    printf("please enter your height: (in centymeters)\n");
    scanf("%f",&height);
    printf("your height in meter is: %.3fm\n",height/100);
    return 0;
}