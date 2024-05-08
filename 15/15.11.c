#include "15.11.h"

int main (int argc, char * argv[])
{
  int j, p;
  char th[3];

  if (argc < 3)
  {
    printf ("No enough parameters. \n");
    exit (0);
  }

  j = str2int (argv[1]);
  p = str2int (argv[2]);

  if ((p > 32) || (p <= 0))
  {
    printf ("Bits are to %s. \n", (p > 32) ? "more" : "less");
    exit (0);
  }

  switch (p)
  {
    case 1:
      strcpy (th, "st\0");
      break;
    case 2:
      strcpy (th, "nd\0");
      break;
    case 3:
      strcpy (th, "rd\0");
      break;
    default:
      strcpy (th, "th\0");
      break;
  }

  printf ("%d's %d%s bit is %s. \n", j, p, th, (if_open (j, p)) ? "opened" : "closed");

  return 0;
}
