#include <stdio.h>
int main (void)
{
    unsigned value;

    for (value = 36; value > 0; value /= 2)
        printf ("%3d",value);

    return 0;
}
