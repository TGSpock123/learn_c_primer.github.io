#include "16.17_18.h"

void fill_array (double ar[], int n)
{
  for (int index = 0; index < n; index ++)
  {
    ar[index] = ((double) rand ()) / ((double) rand () - 0.1);
  }
}

void show_array (const double ar[], int n)
{
  for (int index = 0; index < n; index ++)
  {
    printf ("%9.4f", ar[index]);

    if ((index % 6) == 5)
    {
      putchar ('\n');
    }
  }

  if (n % 6)
  {
    putchar ('\n');
  }
}

int my_comp (const void * p1, const void * p2)
{
  const double * a1 = (const double *) p1, * a2 = (const double *) p2;

  return (!(*a1 - *a2)) ? 0 : ((*a1 > *a2) ? 1 : -1);
}
