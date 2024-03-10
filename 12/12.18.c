#include <stdio.h>
void critic (unsigned int *);
int main (void)
{
    unsigned int units = 0;

    printf ("how many pounds to firkin of butter? \n");
    scanf ("%d", &units);
    while (units != 56)
    {
        critic (&units);
    }
    printf ("you must have looked it up. \n");

    return 0;
}
void critic (unsigned int * units)
{
    printf ("no luck, my friend. \n");
    scanf ("%d", units);
}