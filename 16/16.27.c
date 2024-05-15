#include <stdio.h>
#include <time.h>
#include <stdlib.h>

double time_between (double delay);
int comp (const void * j, const void * p);

int main (void)
{
  clock_t time1, time2;
  int arr_to_sort[200];

  srand (time (0));
  for (int cot = 0; cot < 200; cot ++)
  {
    arr_to_sort[cot] = rand() % 200;
    printf ("%d ", arr_to_sort[cot]);
    ((cot + 1) % 10 == 0) ? ((cot) ? putchar ('\n') : (1)) : (1);
  }

  printf ("Sort start at: %ld. \n", time1 = clock());
  qsort (arr_to_sort, sizeof (arr_to_sort) / sizeof (int),
         sizeof (arr_to_sort[0]), comp);
  printf ("Sort end at: %ld. \n", time2 = clock());
  printf ("%lf clocks past. \n", time_between ((double)(time2 - time1)));

  for (int cot = 0; cot < 200; cot ++)
  {
    printf ("%d ", arr_to_sort[cot]);
    ((cot + 1) % 10 == 0) ? ((cot) ? putchar ('\n') : (1)) : (1);
  }

  return 0;
}

double time_between (double delay)
{
  return delay / CLOCKS_PER_SEC;
}

int comp (const void * j, const void * p)
{
  const int * j1 = (int *) j, * p1 = (int *) p;
  int temp = *j1 - *p1;

  return (!temp) ? 0 : ((temp > 0) ? 1 : -1);
}
