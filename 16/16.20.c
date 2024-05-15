#include <stdio.h>
#include <math.h>
#include <assert.h>

int main (void)
{
  double x, y, z;

  puts ("Enter a pair of numbers (double 0 to quit): ");
  while (((scanf ("%lf%lf", &x, &y)) == 2) && ((x != 0) || (y != 0)))
  {
    z = (x * x) + (y * y);
    assert (z >= 0);
    printf ("Answer is %f. \n", sqrt (z));
    printf ("Please enter next pair of numbers: \n");
  }

  printf ("Thank you for your using. \n");

  return 0;
}