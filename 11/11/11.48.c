#include "s_gets.h"
int atoi_self (char ch[]);
int main (void)
{
    char ch[80];

    s_gets (ch, 80);
    if (atoi_self (ch) != EOF)
    {
        printf ("%d", atoi_self (ch));
    }else;

    return 0;
}
int atoi_self (char ch[])
{
    char * c;
    int j = 0, p = 1;

    c = ch + strlen (ch) - 1;
    if (*ch == '-')
    {
        while (c >= ch + 1)
        {
            if (isnumber (*c))
            {
                j += (*c - '0') * p;
                p *= 10;
            }else
            {
                return EOF;
            }
            c --;
        }
        j = -j;
    }else
    {
        while (c >= ch)
        {
            if (isnumber (*c))
            {
                j += (*c - '0') * p;
                p *= 10;
            }else
            {
                return EOF;
            }
            c --;
        }
    }

    return j;
}
