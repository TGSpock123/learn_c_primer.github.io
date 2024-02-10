#include <stdio.h>
#include <string.h>
char * read_things (char *st, int n);
int main (void)
{
    char sth[90];
    unsigned int j;

    printf ("how many charter would you like to deal? \n");
    scanf ("%u", &j);
    getchar();           //用来处理scanf后面的回车;
    printf ("please enter something: \n");
    printf ("%s", read_things(sth, 80));

    return 0;
}
char * read_things (char *st, int n)
{
    char * red, c, *f, *e, *q;

    red = fgets (st, n, stdin);
    if (red)
    {
        c = *red;
        if (c == '\n')
        {
            *red = '\0';
            return red;
        }
        if (c == '\t' || c ==  ' ')
        {
            for (; (c == '\t') || (c == ' '); red ++)
            {
                c = *red;
                if (c == '\n')
                {
                    *red = '\0';
                    return red;
                }
            }
            red --;
        }
        if (strchr (red, ' ') || strchr (red, '\t') || strchr (red, '\n'))
        {
            q = strchr (red, '\n');
            f = (strchr (red, ' ')) ? strchr (red, ' ') : q;
            e = (strchr (red, '\t')) ? strchr (red, '\t') : q;
            *q = '\0';
            *f = '\0';
            *e = '\0';
        }else
        {
            while (getchar() != '\n');
        }
    }else
    {
        red = "No result. \n";
    }

    return red;
}