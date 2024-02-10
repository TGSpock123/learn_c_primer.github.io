#include <stdio.h>
int main (int argc, char * argv[])
{
    int count;

    for (count = argc - 1; count > 0; count --)
    {
        printf ("%s", argv[count]);
        if (count > 1)
        {
            putchar (' ');
        }
    }
    putchar ('\n');

    return 0;
}