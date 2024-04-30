#include "myPow.h"

double myPow(double x, long  n)
{
  double y = 1;

  if (x == 1 || n == 0)
  {
    return 1;
  }

  if (n < 0)
  {
    n = -n;
    x = 1 / x;
  }

  while (n != 1)
  {
    if (n % 2 == 1)
    {
      y *= x;
    }
    else;
    x *= x;
    n /= 2;
  }

  return y * x;
}
