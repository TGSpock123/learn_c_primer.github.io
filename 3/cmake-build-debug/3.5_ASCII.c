#include <stdio.h>

int main(void)
{
    char ch;

    printf("please enter a charater.\n");
    scanf("%c",&ch);
    printf("the code for %c is %d.\n",ch,ch);

    return 0;
}