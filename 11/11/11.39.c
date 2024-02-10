#include "s_gets.h"
#define SHIT 80
char * mystrncpy (char * st1, const char * st2, int n);
int main (void)
{
    char str1[SHIT], str2[SHIT];
    int q;

    printf ("please keep enter two sentences, the second one will bite the tail of the first one. \n");
    while (1)
    {
        printf ("now enter the first one: \n");
        s_gets (str1, SHIT);
        printf ("now enter the second one: \n");
        s_gets (str2, SHIT);
        if (!*str1 || !*str2)
        {
            break;
        }else
        {
            printf ("how many charater would you like to paste: \n");
            scanf ("%d", &q);
            getchar();
            printf ("%s\n", mystrncpy(str1, str2, q));
            printf ("please enter next two sentences. \n");
        }
    }
    printf ("thank you\n");

    return 0;
}
char * mystrncpy (char * st1, const char * st2, int n)
{
    int j = strlen (st1);
    int p = 0;

    for (; j < SHIT && p < n && st2[p]; j ++, p ++)
    {
        st1[j] = st2[p];
    }
    st1 [j] = '\0';

    return st1;
}