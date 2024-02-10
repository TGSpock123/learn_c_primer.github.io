#include "s_gets.h"
#define LONG 80
char * string_in (char * st1, char * st2);
int main (void)
{
    char str1[LONG], str2[LONG];

    printf ("this program is checking if the second string is include by the first one. \n");
    while (1)
    {
        printf ("now enter the first one: \n");
        s_gets (str1, LONG);
        printf ("now enter the second one: \n");
        s_gets (str2, LONG);
        if (!*str1 || !*str2)
        {
            break;
        }else
        {
            char *result = string_in(str1, str2);
            if (result)
            {
                printf("'%s' is in '%s' at position %ld.\n", str2, str1, result - str1 + 1);
            }
            else
            {
                printf("'%s' is not found in '%s'.\n", str2, str1);
            }
            printf("Please enter next two strings. \n");
        }
    }
    printf ("thank you\n");

    return 0;
}
char * string_in (char * st1, char * st2)
{
    int j, p, leng1 = strlen (st1), leng2 = strlen (st2);

    for (j = 0; j < leng1 - leng2 + 1; j ++)
    {
        for (p = 0; p < strlen (st2); p ++)
        {
            if (st1[j + p] != st2[p])
            {
                break;
            }else;
        }
        if (p == leng2)
        {
            return st1 + j;
        }else;
    }
    return NULL;
}