#include "s_gets.h"
const char * strchar (const char * st, char ch);
int main (void)
{
    char str[80], ch;

    printf ("please enter a sentence: \n");
    s_gets (str, 80);
    printf ("please enter a charter: \n");
    ch = getchar ();
    if (ch != '\n')
    {
        getchar();
    }else;
    while (*str != '\0')
    {
        if (strchar (str, ch))
        {
            printf ("%c is in %s! \n", ch, str);
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
const char * strchar (const char * st, char ch)
{
    const char * temp;
    int p = 1;

    for (int j = 0; j < strlen (st); j ++)
    {
        if (ch == st[j])
        {
            p = 0;
            break;
        }else;
    }
    if (p == 0)
    {
        temp = st;
        return temp;
    }else
    {
        return NULL;
    }
}