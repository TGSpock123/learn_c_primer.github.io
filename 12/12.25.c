#include "s_gets.h"
char ** deel_input (int, char *);
int main (void)
{
    int j;
    char ** array;

    printf ("how many words do you want to enter? \n");
    scanf ("%d", &j);
    getchar();
    char ch_ar[j * 50];
    printf ("enter %d words now: \n", j);
    s_gets (ch_ar, j * 50);
    array = deel_input (j, ch_ar);
    for (int i = 0; i < j; i ++)
    {
        puts (array[i]);
        free (array[i]);
    }

    free (array);
    return 0;
}
char ** deel_input (int p, char * ch)
{
    int q = 0;
    char * end;
    char ** ch_ar = (char **) malloc (p * sizeof (char *));

    for (int i = 0; i < p; i ++)
    {
        while (isspace (ch[i]))
        {
            ch ++;
        }
        end = ch;
        while (*end && !isspace(*end))
        {
            end ++;
        }
        ch_ar[i] = (char*) malloc (sizeof (char) * (end - ch + 1));
        for (int l = 0; l < end - ch; l ++)
        {
            ch_ar[i][l] = ch[l];
        }
        ch_ar[i][end - ch] = '\0';
        while (isspace (*end))
        {
            end ++;
        }
        ch = end;
    }

    return ch_ar;
}
