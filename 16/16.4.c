#include <stdio.h>

#define PSQR(X) printf ("The square of "#X" is %d. \n", ((X) * (X)));

int main (void)
{
  int y = 5;

  PSQR (y)
  PSQR (2 + 4)

  return 0;
}