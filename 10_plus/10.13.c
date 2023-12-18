#include <stdio.h>
#include "10.13_14.h"
int main (void)
{
    double dip[SIZE] = {20.0, 17.66, 8.2, 15.3, 22.22};

    printf ("The original dip array: \n");
    show_array (dip, SIZE);
    mult_array (dip, SIZE, 2.5);
    printf ("The dip array after calling mult_array(): \n");
    show_array (dip, SIZE);

    return 0;
}