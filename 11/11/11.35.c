#include <stdio.h>
#include <string.h>
char * read_things (char *st, int n);
int main (void)
{
    char sth[20];
    printf ("please enter something: \n");
    printf ("%s", read_things(sth, 20));

    return 0;
}
char * read_things (char *st, int n)
{
    char * ret, * f, * q, * e;
    ret = fgets (st, n, stdin);
    if (ret)
    {
        if (strchr (ret, ' ') || strchr (ret, '\t') || strchr (ret, '\n'))
        {
            q = strchr (ret, '\n');
            f = (strchr (ret, ' ')) ? strchr (ret, ' ') : q;
            e = (strchr (ret, '\t')) ? strchr (ret, '\t') : q;
            *f = '\0';
            *q = '\0';
            *e = '\0';
        }else
        {
            while ((getchar() == '\n') == 0);
        }
    }else
    {
        ret = "No result. \n";
    }

    return ret;

}