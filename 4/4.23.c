#include <stdio.h>
#include <string.h>
int main(void)
{
    char firstname [20];
    char lastname [20];
    int width1,width2;
    printf("please enter your name:\n");
    scanf("%s %s",firstname,lastname);
    width1 = strlen(firstname);
    width2 = strlen(lastname);
    printf("%s %s\n",firstname,lastname);
    printf("%*d %*d\n",width1,width1,width2,width2);
    printf("%s %s\n",firstname,lastname);
    printf("%-*d %-*d\n",width1,width1,width2,width2);

    return 0;
}