#include "11.43_44.h"
void opr_1 (char str[][LENGTH], int d)
{
    for (int b = 0; b < d; b ++)
    {
        puts (str[b]);
    }
}

void opr_2 (char * n[10], int d)
{
    int j, p;
    char * temp;
/*
    for (j = 0; j < d - 1; j ++)
    {
        for (p = j + 1; p < d; p ++)
        {
            if (strcmp (n[j], n[p]) > 0)
            {
                temp = n[j];
                n[j] = n[p];
                n[p] = temp;
            }
        }
    }
*/
    for (p = 0; p < d - 1; p ++)
    {
        for (j = 0; j < d - p - 1; j ++)
        {
            if (strcmp (n[j], n[j + 1]) > 0)
            {
                temp = n[j];
                n[j] = n[j + 1];
                n[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < d; i ++)
    {
        puts (n[i]);
    }
}

void opr_3_1 (char * str[], int d)
{
    char * temp;

    for (int j = 0; j < d - 1; j ++)
    {
        for (int p = j + 1; p < d; p ++)
        {
            if (strlen (str[j]) > strlen (str[p]))
            {
                temp = str[j];
                str[j] = str[p];
                str[p] = temp;
            }
        }
    }
    for (int i = 0; i < d; i ++)
    {
        printf ("%s\n",str[i]);
    }
}

void opr_3_2 (char * str[], int d)
{
    unsigned int cmp[d], pmet;
    char * temp;

    for (int i = 0; i < d; i ++)
    {
        cmp[i] = strlen (str[i]);
    }
    for (int j = 0; j < d - 1; j ++)
    {
        for (int p = j + 1; p < d; p ++)
        {
            if (cmp[j] > cmp[p])
            {
                temp = str[j];
                str[j] = str[p];
                str[p] = temp;
                pmet = cmp[j];
                cmp[j] = cmp[p];
                cmp[p] = pmet;
            }
        }
    }
    for (int i = 0; i < d; i ++)
    {
        printf ("%s\n",str[i]);
    }
}

void opr_4 (char * str[], int d)
{
    unsigned int cmp[d], pmet, cot;
    char * temp, * c;

    for (int i = 0; i < d; i ++)
    {
        for (c = str[i], cot = 0; *c && !isspace (*c); c ++, cot ++);
        cmp[i] = cot;
    }
    for (int j = 0; j < d - 1; j ++)
    {
        for (int p = j + 1; p < d; p ++)
        {
            if (cmp[j] > cmp[p])
            {
                temp = str[j];
                str[j] = str[p];
                str[p] = temp;
                pmet = cmp[j];
                cmp[j] = cmp[p];
                cmp[p] = pmet;
            }
        }
    }
    for (int i = 0; i < d; i ++)
    {
        printf ("%s\n",str[i]);
    }
}
