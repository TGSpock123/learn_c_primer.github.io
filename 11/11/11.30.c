#include "s_gets.h"
#define SIZE 81
#define LIM 20
#define HALT ""

void stsrt (char *strings[], int num)
{
    char *temp;
    int top, seek;

    for (top = 0; top < num - 1; top ++)
    {
        for (seek = top + 1; seek < num; seek ++)
        {
            if (strcmp (strings[top], strings[seek]) > 0)
            {
                temp = strings[top];
                strings[top] = strings[seek];
                strings[seek] = temp;
            }
        }
    }
}

int main (void)
{
    char input[LIM][SIZE];
    char *ptstr[LIM];
    int ct = 0;
    int k;

    printf ("Input up to %d lines, and I will sort em. \n", LIM);
    printf ("Press enter in an empty line to quit. \n");
    while (ct < LIM && s_gets(input[ct], SIZE) && input[ct][0])
    {
        ptstr[ct] = input[ct];
        ct ++;
    }
    stsrt (ptstr, ct);
    puts ("\nHere's the sort list: \n");
    for (k = 0; k < ct; k ++)
    {
        puts (ptstr[k]);
    }

    return 0;
}