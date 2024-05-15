#include <stdio.h>
#include <limits.h>

_Static_assert (CHAR_BIT == 16, "16-bit cahr falsely assuned");

int main (void)
{
  printf ("Char is 16 bits. \n");

  return 0;
}