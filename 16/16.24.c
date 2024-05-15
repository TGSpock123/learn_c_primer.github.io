#include "16.24.h"

int main (void)
{
  int x = 6, y = 4;

//相当于注释;
#define _SKIP
#ifndef _SKIP
  printf ("%d\n", EVEN_GT (x, y));
  PLUS (3 + 2, 7 * 8);
  printf ("%d%c", I, SPACE);
  PS ();
  printf ("%d", BIG(x));
  PS ();
  printf ("%d\n", SUMSQ (x, y));
#endif

  PRT_INT (x);

#ifdef PRT_DATE
  time_t now_time;
  struct tm time_for_print;
  char buffer[80];

  time (&now_time);
  time_for_print = * localtime (&now_time);
  strftime (buffer, sizeof (buffer), "%Y.%m.%d, %H:%M:%S", &time_for_print);
  PRT_DATE (buffer);
#endif

  _Bool bl = 0;
  int i = 7;
  char ch = 9;
  double d = 9.3;

  printf ("%d %d %d %d\n", IF_BOOL (bl), IF_BOOL (i), IF_BOOL (ch), IF_BOOL (d));

  int arr[] = {
      3, 8, 4, 1, 6, 7, 0, 5, 2, 9
  };

  qsort ((int *)arr, sizeof (arr) / sizeof (int), sizeof (arr[0]), comp);
  for (int cot = 0; cot < (sizeof (arr) / sizeof (int)); cot ++)
  {
    printf ("%d ", arr[cot]);
  }
  putchar ('\n');

  return 0;
}

int comp (const void * j, const void * p)
{
  const int * j1 = (int *) j, * p1 = (int *) p;
  int temp = *j1 - *p1;

  return (!temp) ? 0 : ((temp > 0) ? 1 : -1);
}
