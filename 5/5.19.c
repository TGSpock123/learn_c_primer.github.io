#include <stdio.h>
void pound (int n);//函数原型声明
int main(void)
{
    int times =  5;
    char ch = '!';
    float f = 7.6f;
    pound (times);
    pound(ch);
    pound(f);
    return 0;
}
void pound(int n)
{
    while (n-- > 0)
        printf("#");
    printf("\n");
}