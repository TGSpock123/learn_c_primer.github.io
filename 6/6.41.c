#include <stdio.h>
#include <string.h>

int main (void)
{
    char ch[80];
    unsigned long j;

    printf ("please enter a sentence: \n");
    scanf ("%[^/n]", ch);
    j = strlen(ch);
    printf("j = %lu", j);
    return 0;
}