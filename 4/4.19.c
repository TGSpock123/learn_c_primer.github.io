#include <stdio.h>
#include <string.h>
int main(void)
{
    char name [20];
    char name2 [20];
    int width;
    printf("please enter yuor name:\n");
    scanf("%s %s",name,name2);
    width = strlen(name) + 3;
    printf("\"%s %s\"\n",name,name2);
    printf("%20s ""%s\n",name,name2);
    printf("%*s %s",width,name,name2);
    return 0;
}