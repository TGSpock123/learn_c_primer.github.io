#include <stdio.h>
#include <math.h>

#define PR(X, ...) printf ("Message " #X ": " __VA_ARGS__);

int main (void)
{
  double x = 48;
  double y, z;

  y = sqrt (x);
  z = sqrt (y);
  PR (1, "x = %g. \n", x)
  PR (2, "x = %.2f, y = %.4f. \n", x, y)
  PR (3, "x = %.2f, y = %.4f, z = %.6f. \n", x, y, z)

  return 0;
}