#include <stdio.h>
void temperature(double h);
int main(void)
{
    float h;
    int x;
    printf("please enter H:(q to quit) ");
    x = scanf("%f",&h);
    while (x == 1)
    {
        temperature(h);
        printf("please enter next H:(q to quit) ");
        x = scanf("%f",&h);
    }
    printf("done");
    return 0;
}
void temperature(double h)
{
    const double CONVER = 273.16;
    double c,k;
    c = 5.0 / 9.0 * (h - 32.0);
    k = c + CONVER;
    printf("%.2f H is %.2f C,is %.2f K\n",h,c,k);
}