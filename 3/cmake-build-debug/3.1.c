#include <stdio.h>

int main(void)
{
    float weight;
    float value;

    printf("How much is your weight in Pt?\n");
    getchar();
    printf("let's check it out\n");
    //shu ru
    printf("please enter your weight:\n");
    scanf("%f",&weight);
    //Pt $1700/Oz
    //1Oz=14.5833GOz
    value=weight*1700*14.5783;
    printf("your weight is %.0f Oz\n",weight);
    printf("press Enter to continue\n");
    getchar();
    printf("Your weight in platinum is worth %.2f \n",value
    );
    printf("press enter to continue");
    getchar();


    return 0;
}