#include <stdio.h>

unsigned int rotate_1 (unsigned int j, unsigned int p);

int main (void)
{
  unsigned int j, p;

  printf ("Please enter a number to convert: \n");
  scanf ("%u", &j);
  while (getchar() != '\n');
  printf ("Please enter how many bits to convert: \n");
  scanf ("%u", &p);
  while (getchar() != '\n');

  printf ("The number converted is %u. \n", rotate_1 (j, p));

  return 0;
}

unsigned int rotate_1 (unsigned int j, unsigned int p)
{
  unsigned int temp = 1 << p;
  unsigned int j1, p1 = j, count = 0, mask = 0;

  for (; p1 > 0; p1 >>= 1, count ++);

  if (count < p)
  {
    return 0;
  }

  for (int i1 = 0, i2 = 1; i1 < (count - p); i1 ++, i2 <<= 1)
  {
    mask += i2;
  }

  for (j1 = j; j1 > temp; j1 >>= 1);
  j &= mask;
  j <<= p;

  return j1 + j;
}