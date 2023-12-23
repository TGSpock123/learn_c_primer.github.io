#include <stdio.h>
#include "10.26_27.h"
int main (void)
{
    int qwer[10] = {4, 2, 6, 3, 1, 9, 5,0,8, 7};
    double tyui[10] = {4.4, 2.2, 6.6, 3.3, 1.1, 9.9, 0.9, 8.8, 7.7};

    printf ("Max of qwer is %d \n", max (qwer, 10));
    bubble (qwer, 10);
    for (int i = 0; i < 10; i ++)
    {
        printf ("qwer [%d] = %d \n", i, qwer[i]);
    }
    printf ("The subscript of max of tyui is %d \n", maxm(tyui, 10));
    printf ("Max of tyui - min of tyui is %f \n", minus(tyui, 10));

    return 0;
}
