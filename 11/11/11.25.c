#include "s_gets.h"
#define SIZE 40
#define LIM 5
int main (void)
{
    char qwords[LIM][SIZE];
    char temp[SIZE];
    int i = 0;

    printf ("Enter %d words beginning with q: \n", LIM);
    while (i < LIM && s_gets(temp, SIZE))
    {
        if (temp[0] != 'q')
        {
            printf ("%s doesn't begin with q! \n", temp);
        }else
        {
            strcpy (qwords[i], temp);
            i ++;
        }
    }
    puts ("\nHere are the words accepted: ");
    for (i = 0; i < LIM; i ++)
    {
        puts (qwords[i]);
    }

    return 0;
}
//后面是被复制字符串, 把后面的放进前面的, 参考 mov ax, 4