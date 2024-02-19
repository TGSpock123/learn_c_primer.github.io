#include <stdio.h>
int units = 0;
void critic (void);
int main (void)
{
    extern int units;

    printf ("how many pounds to firkin of butter? \n");
    scanf ("%d", &units);
    while (units != 56)
    {
        critic ();
    }
    printf ("you must have looked it up. \n");

    return 0;
}
void critic (void)
{
    printf ("no luck, my friend. try again. \n");
    scanf ("%d", &units);
}