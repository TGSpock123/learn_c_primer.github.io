#include <stdio.h>

#define SQUARE(X) ((X) * (X))
#define PR(X) printf ("The rezult is %d. \n", X);

int main (void)
{
  int x = 5;
  int z;

  printf ("x = %d\n", x);

  z = SQUARE (x);
  printf ("Evaluating SQUARE (x): \n");
  PR (z)

  z = SQUARE (2);
  printf ("Evaluating SQUARE (2): \n");
  PR (SQUARE (2))

  printf ("Evaluating SQUARE (x + 2): \n");
  PR (SQUARE (x + 2))

  printf ("Evaluating 100 / SQUARE (2): \n");
  PR (100 / SQUARE (2))

  printf ("x is %d now. \n", x);
  //错误示范:
  printf ("Evaluating SQUARE (++ x): \n");
  PR (SQUARE (++ x))
  printf ("After incrementing, x is %x. \n", x);

  return 0;
}