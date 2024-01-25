#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LIMIT 81
void to_upper (char * str);
int punct_count (const char *str);

int main (void)
{
    char line[LIMIT];
    char * find;

    puts ("please enter a line: ");
    fgets (line, LIMIT, stdin);
    find = strchr (line, '\n');
    if (find)
    {
        *find = '\0';
    }
    to_upper (line);
    puts (line);
    printf ("That line has %d punctuation characters. \n", punct_count (line));

    return 0;
}
void to_upper (char * str)
{
    while (*str)
    {
        if (islower (*str))
        {
            *str = toupper (*str);
        }
        str ++;
    }
}
int punct_count (const char * str)
{
    int ct;

    for (ct = 0; *str; str ++)
    {
        if (ispunct (*str))
        {
            ct ++;
        }
    }

    return ct;
}