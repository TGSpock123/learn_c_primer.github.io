#include <stdio.h>

#define XNAME(N) x ## N
#define PRINT_XN(N) printf ("x" #N " = %d. \n", x ## N);

int main (void)
{
  int XNAME (1) = 14;
  int XNAME (2) = 20;
  int x3 = 30;

  PRINT_XN (1)
  PRINT_XN (2)
  PRINT_XN (3)

  return 0;
}
