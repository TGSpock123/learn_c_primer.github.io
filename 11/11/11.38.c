#include "s_gets.h"
int is_within (const char * st, char ch);
int main (void)
{
    char ch, str[80];

    printf ("please enter a sentence: \n");
    s_gets (str, 80);
    printf ("please enter a charter: \n");
    ch = getchar ();
    if (ch != '\n')
    {
        getchar();
    }else;
    while (*str)
    {
        if (is_within (str, ch))
        {
            printf ("%c appears in %s for %d times! \n", ch, str, is_within(str, ch));
        }else
        {
            printf ("there is no %c in %s! \n", ch, str);
        }
        printf ("please enter another sentence: \n");
        s_gets (str, 80);
        printf ("please enter a charter: \n");
        ch = getchar ();
        if (ch != '\n')
        {
            getchar();
        }else;
    }
    printf ("thank you!\n");

    return 0;
}
int is_within (const char * st, char ch)
{
    int p = 0;

    for (int j = 0; j < strlen (st); j ++)
    {
        if (ch == st[j])
        {
            p ++;
        }else;
    }
    if (p != 0)
    {
        return p;
    }else
    {
        return 0;
    }
}