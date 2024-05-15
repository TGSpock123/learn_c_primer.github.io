#include <stdio.h>

inline static void eatline (void)
{
  while (getchar() != '\n');
}

int main (void)
{
  char str[30];

  printf ("test: \n");
  scanf ("%s", str);
  eatline ();
  printf ("%s\n", str);

  return 0;
}
