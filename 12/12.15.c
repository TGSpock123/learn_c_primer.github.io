#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    double * ptd;
    int max, number, i = 0;

    puts ("what is the maximum number of type double entries? ");
    if (!scanf ("%d", &max))
    {
        puts ("number not correctly entered, bye. ");
        exit (EXIT_FAILURE);
    }else;
    getchar();
    ptd = (double *) malloc (max * sizeof (double));
    if (ptd == NULL)
    {
        puts ("memory allocation failed, bye. ");
        exit (EXIT_FAILURE);
    }else;
    puts ("enter the values (q to quit) : ");
    while (i < max && scanf ("%lf", &ptd[i]))
    {
        ++ i;
    }
    printf ("here are your %d entries: \n", number = i);
    for (i = 0; i < number; i ++)
    {
        printf ("%7.2f", ptd[i]);
        if (i % 7 == 6)
        {
            putchar ('\n');
        }else;
    }
    if (i % 7 != 0)
    {
        putchar ('\n');
    }else;
    puts ("done. ");

    free (ptd);
    return 0;
}
//动态数组填充
//动态二维数组: 需要使用变长数组
//int p = 10, j = 9;
//int (* p2)[p];
//p2 = (int (*)[p]) malloc (j * p * sizeof(int));