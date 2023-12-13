#include <stdio.h>
#include <string.h>
#define DENSITY 62.4
int main(void)
{
    float weight,volume;
    int size,letters;
    char name[40];

    printf("hi, what's your name?\n");
    scanf("%s",name);
    printf("%s,what's your weight in pounds?\n",name);
    scanf("%f",&weight);
    size = sizeof name;
    letters = strlen(name);
    volume = weight / DENSITY;
    printf("well, %s your volume is %2.2f cubit feet\n",name,volume);
    printf("also, your first name has %d letters,\n",letters);
    printf("and we used %d bytes to store it\n",size);

    return 0;
}