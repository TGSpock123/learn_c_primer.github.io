#include "s_gets.h"
int main (void)
{
    char str[80], * c;
    int u_cot = 0, l_cot = 0, w_cot = 0, p_cot = 0, n_cot = 0, a_cot = 0;

    printf ("please enter a sentence.\n");
    s_gets (str, 80);
    c = str;
    while (*c)
    {
        a_cot ++;
        if (isupper (*c))
        {
            u_cot ++;
        }else if (islower (*c))
        {
            l_cot ++;
        }else if (ispunct (*c))
        {
            p_cot ++;
        }else if (isnumber (*c))
        {
            n_cot ++;
        }else if (isspace (*c))
        {
            if (a_cot - 1)
            {
                if (!isspace (*(c - 1)))
                {
                    w_cot ++;
                }else;
            }else;
        }else;
        *c ++;
    }
    if (*(c - 1) != ' ')
    {
        w_cot ++;
    }
    printf ("you've input %d words, %d uppers, %d lowers, %d puncts, %d numbers. \n",
            w_cot, u_cot, l_cot, p_cot, n_cot);

    return 0;
}