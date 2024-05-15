#include <stdio.h>
#include <stdlib.h>
void sign_off (void);
void too_bad (void);

int main (void)
{
  int n;

  atexit (sign_off);
  printf ("Enter an integer: \n");

  if (scanf ("%d", &n))
  {
    printf ("%d is %s. \n", n, (n % 2) ? "odd" : "even");
  }else
  {
    puts ("That's no integer.");
    atexit (too_bad);
    exit (EXIT_FAILURE);
  }

  return 0;
}

void sign_off (void)
{
  printf ("Thus terminates another magnificent program from ");
  printf ("SeeSaw Software. \n");
}

void too_bad (void)
{
  printf ("SeeSaw Software extends its heartfelt condolences ");
  printf ("to you upon the failure of your program. \n");
}
