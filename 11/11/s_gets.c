#include "s_gets.h"
char * s_gets (char *st, int n)
{
    char * ret_val, * find;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        if (strchr (ret_val, '\n'))
        {
            find = strchr (ret_val, '\n');
            *find = '\0';
        }else
        {
            while ((getchar() == '\n') == 0);
        }
    }

    return ret_val;
}