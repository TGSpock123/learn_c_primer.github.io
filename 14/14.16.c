#include <stdio.h>

int main (void)
{
  enum spectrum   //green = 302, blue = 303 ... ;
  {
    red = 100, orange = 300, yellow = 301, green, blue, violet, purple
  } color;

  for (color = blue; color != yellow; (color < yellow) ? color ++ : color --);

  printf ("%u   %u   %u", color, red, purple);

  return 0;
}