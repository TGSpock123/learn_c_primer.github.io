#include <stdio.h>

int main (void)
{
    int i =0;

    while (++i < 4)
    {
        printf ("hi");
    }
    do
    {
     printf ("bye");
    }while (i++ < 8);

    return 0;
}