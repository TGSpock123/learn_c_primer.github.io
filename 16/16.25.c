#include <stdio.h>

#define HARM_MIN(X, Y) (1.0 / (((1.0 / (X)) + (1.0 / (Y))) / 2.0))

inline static void eatline (void)
{
  while (getchar() != '\n');
}

int main (void)
{
  int j, p;

  printf ("Please enter j and p, q to quit: \n");
  while ((scanf ("%d%d", &j, &p)) == 2)
  {
    eatline();

    if ((!j) || (!p))
    {
      printf ("Zero out. \n");
      continue;
    }

    printf ("The harmonic mean of %d and %d is %.6f. \n", j, p, HARM_MIN ((double) j, (double) p));
    printf ("Please enter next pair of value: \n");
  }

  printf ("Thank you for using. \n");

  return 0;
}
