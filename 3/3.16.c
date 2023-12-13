#include <stdio.h>
int main(void)
{
    double  a = 3.156e7;
    double  b;
    short int c;
    printf("please enter your age:\n");
    scanf("%hd", &c);
    b = c * a;
    printf("you have spent %.0f seconds in your life", b);

    return 0;
}