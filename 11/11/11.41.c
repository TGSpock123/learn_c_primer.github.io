#include "s_gets.h"
#define LONG 80
char * converce (char * str, char * rts);
int main (void)
{
    char str1[LONG];

    printf ("this program converses sentences. \n");
    printf("now enter the sentence: \n");
    while (1)
    {
        s_gets(str1, LONG);
        if (!*str1)
        {
            break;
        }else
        {
            char rts[strlen (str1) + 1];
            printf ("%s\n", converce (str1, rts));
        }
        printf ("now enter another sentence: \n");
    }
    printf ("thank you\n");

    return 0;
}
char * converce (char * str, char * rts)
{
    unsigned long int j = 0, p = strlen (str);

    for (; j <= p; j ++)
    {
        rts[j] = str[p - j - 1];
    }
    rts[p] = '\0';

    return rts;
}