#include "s_gets.h"
#define LONG 80
void delt (char * str1);
int main (void)
{
    char str1[LONG];

    printf ("this program deletes spaces in sentences. \n");
    printf("now enter the sentence: \n");
    while (1)
    {
        s_gets(str1, LONG);
        if (!*str1)
        {
            break;
        }else
        {
            delt (str1);
            putchar ('\n');
        }
        printf ("now enter another sentence: \n");
    }
    printf ("thank you\n");

    return 0;
}
void delt (char * str1)
{
    for (int j = 0, p = strlen(str1); j < p; j ++)
    {
        if (!isspace (str1[j]))
        {
            putchar (str1[j]);
        }
    }
}
//数组新建方法留着下次