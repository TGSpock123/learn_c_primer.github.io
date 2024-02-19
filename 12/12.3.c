#include <stdio.h>
int fade = 1;
void trystat (void);
int main (void)
{
    int count;
    for (count = 1; count <= 3; count ++)
    {
        printf ("Here comes iteration %d: \n", count);
        trystat ();
    }

    return 0;
}
void trystat (void)
{
    static int stay = 1;

    printf ("fade = %d and stay = %d\n", fade ++, stay ++);
}