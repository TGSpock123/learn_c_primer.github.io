#include <stdio.h>
int main(void)
{
    float cup;
    float pinto;
    float oz;
    float soup_spn;
    float tea_spn;
    printf("please enter cup number:\n");
    scanf("%f",&cup);
    pinto = cup / 2;
    oz = cup * 8;
    soup_spn = oz / 2;
    tea_spn = soup_spn * 3;
    printf("there are %.0f cup, %.3f pinto, %.0f oz, %.0f soup spoon, %.0f tea spoon \n",cup,pinto,oz,soup_spn,tea_spn);
    return 0;
}