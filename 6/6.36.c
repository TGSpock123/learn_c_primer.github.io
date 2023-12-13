#include <stdio.h>
#include <string.h>
int main (void)
{
    int x;
    char ch[30];

    printf ("please enter a word: \n");
    scanf ("%s",ch);
    for (x = strlen(ch) - 1; x >= 0; x --)
    printf ("%c",ch[x]);

    return 0;
}