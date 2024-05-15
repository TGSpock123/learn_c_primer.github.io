#include "16.17_18.h"

int main (void)
{
  srand ((unsigned int) time (0));
  double vals[NUM];

  fill_array (vals, NUM);

  printf ("Random list: \n");
  show_array (vals, NUM);

  printf ("\nSorted list: \n");
  qsort (vals, NUM, sizeof (double), my_comp);
  show_array (vals, NUM);

  return 0;
}
