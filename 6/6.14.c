#include <stdio.h>

int main(void)
{
    char ch;

    for (ch = 'A'; ch <=  'z'; ch++)
    {
        printf("the ascii value for %c is %d \n",ch,ch);
        printf("%d letters left\n",'z'-ch);
    }

    return 0;
}