#include <stdio.h>
#define CONVERS 378.5 / 160.9
int main(void)
{
    float melage;
    float consume;
    float GA_ML;
    float L_hKM;
    printf("please enter your melage and gas consume: (spreate by a single space)\n");
    scanf("%f %f",&melage,&consume);
    printf("caculating...\n");
    GA_ML = consume / melage;
    printf("your fuel consumption is %.3f GA/ML\n",GA_ML);
    L_hKM = CONVERS / GA_ML;
    printf("and also %.3f L/hKM\n",L_hKM);
    return 0;
}