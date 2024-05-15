#include <stdio.h>
#include <stdarg.h>

double sum (int lim, ...);

int main (void)
{
  double j, p;

  j = sum (3, 1.1, 2.5, 13.3);
  p = sum (6, 1.1, 2.1, 13.1, 4.1, 5.1, 6.1);

  printf ("sum (3, 1.1, 2.5, 13.3) == %g. \n", j);
  printf ("sum (6, 1.1, 2.1, 13.1, 4.1, 5.1, 6.1) == %g. \n", p);

  return 0;
}

double sum (int lim, ...)
{
  //对象储存参数;
  va_list ap;
  double tot = 0;

  va_start (ap, lim);
  for (int i = 0; i < lim; i ++)
  {
    tot += va_arg (ap, double);
  }

  va_end (ap);
  return tot;
}
