#include <stdio.h>
int main (void)
{
  int val = 2, val2 = 3, val3 = 7;
  unsigned char val1 = 2;

  val3 &= val2;
  ~val1;
  printf ("%d, %u, %d, %d\n", ~val, ~val1, val & val2, val3);

  val = 5;
  val3 |= val;
  printf ("%d \n", val3);

  val3 = 5;
  val3 ^= val;
  printf ("%d \n", val3);
  return 0;
}