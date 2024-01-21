#include "s_gets.h"
#define SIZE 40
#define TARGETSIZE 7
#define LIM 5
int main (void)
{
    char qwords[LIM][TARGETSIZE];
    char temp[SIZE];
    int i = 0;

    printf ("Enter %d words beginning with q: \n", LIM);
    while (i < LIM && s_gets(temp, SIZE))
    {
        if (temp[0] != 'q')
        {
            printf ("%s doesn't begging with 'q'! \n", temp);
        }else
        {
            strncpy (qwords[i], temp, TARGETSIZE - 1);
            qwords[i][TARGETSIZE - 1] = '\0';
            i ++;
        }
    }
    puts ("Here are the words accepted:");
    for (i = 0; i < LIM; i ++)
    {
        puts (qwords[i]);
    }

    return 0;
}