#include <stdio.h>
int main(void)
{
    unsigned int s;
    printf("please enter a ASCII :\n");
    scanf("%ud",&s);
    if(s<=32)
    {
        printf("it's a control word, please enter another\n");
    }else if(s>=127)
    {
        printf("that's too big\n");
    }else if(32<s<127)
    {
        printf("you've entered %c \n", s);
    }


    return 0;
}