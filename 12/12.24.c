#include <stdio.h>
#include <stdlib.h>
int * make_array (int, int);
void show_array (const int *, int);
int main (void)
{
    int * pa;
    int size;
    int value;

    printf ("enter the number of elements: \n");
    while (scanf ("%d", &size) == 1 && size > 0)
    {
        printf ("enter the initialization value: \n");
        scanf ("%d", &value);
        pa = make_array (size, value);
        if (pa)
        {
            show_array (pa, size);
            free (pa);
        }
        printf ("enter the number of elements (< 1 to quit): \n");
    }
    printf ("done. \n");

    return 0;
}

int * make_array (int elem, int val)
{
    int * ret_val = (int *) malloc (elem * sizeof (int));

    for (int i = 0; i < elem; i ++)
    {
        ret_val[i] = val;
    }

    return ret_val;
}

void show_array (const int ar[], int n)
{
    for (int i = 1; i <= n; i ++)
    {
        printf ("%4d", ar[i - 1]);
        if (i % 8 == 0)
        {
            putchar ('\n');
        }
    }
    putchar ('\n');
}