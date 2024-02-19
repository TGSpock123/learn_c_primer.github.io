#include "s_gets.h"
char str[80];
char * c;
int main (int argc, char * argv[])
{
    printf ("please enter a sentence. \n");
    s_gets (str, 80);
    if (argc < 2 || !strcmp (argv[1], "-p"))
    {
        printf ("%s\n", str);
    }else if (!strcmp (argv[1], "-u"))
    {
        for (c = str; *c; c ++)
        {
            if (islower (*c))
            {
                putchar (*c - 32);
            }else
            {
                putchar (*c);
            }
        }
        putchar ('\n');
    }else if (!strcmp (argv[1], "-l"))
    {
        for (c = str; *c; c ++)
        {
            if (isupper(*c))
            {
                putchar (*c + 32);
            }else
            {
                putchar (*c);
            }
        }
        putchar ('\n');
    }else;

    return 0;
}