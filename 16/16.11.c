#include <stdio.h>

#define PRAGMA(X) _Pragma (#X)
#define LIMRG(X) PRAGMA (STDC CX_LIMITED_RANGE X)

int main (void)
{
  LIMRG (ON)
  printf ("Hello World from LIMRG(ON)\n");

  return 0;
}
