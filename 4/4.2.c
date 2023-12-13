#include <stdio.h>
#define PRAISE "you are an extraordinary being"
int main (void)
{
    char name[40];
    printf("what's your name?\n");
    scanf("%s",name);
    printf("hello, %s, %s. \n",name,PRAISE);
    return 0;
}