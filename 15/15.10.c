#include "15.9_10.h"

int main (int argc, char * argv[])
{
  bool eigen = 1;
  int j, p;
  char ch [5][33];

  if (argc < 3)
  {
    printf ("No enough parameters. \n");
    exit (0);
  }

  for (int i = 0; i < strlen (argv[1]); i ++)
  {
    if ((argv[1][i] != '0') && (argv[1][i] != '1'))
    {
      eigen = 0;
      break;
    }
  }

  if (eigen == 1)
  {
    j = b2dcov (argv[1]);
  }else
  {
    printf ("Wrong input");
    exit (0);
  }

  for (int i = 0; i < strlen (argv[2]); i ++)
  {
    if ((argv[2][i] != '0') && (argv[2][i] != '1'))
    {
      eigen = 0;
      break;
    }
  }

  if (eigen == 1)
  {
    p = b2dcov (argv[2]);
  }else
  {
    printf ("Wrong input");
    exit (0);
  }

  printf ("~ %s = %s\n", argv [1], itobs (~ j, ch[0]));
  printf ("~ %s = %s\n", argv [2], itobs (~ p, ch[1]));
  printf ("%s & %s = %s\n", argv[1], argv[2], itobs (j & p, ch[2]));
  printf ("%s | %s = %s\n", argv[1], argv[2], itobs (j | p, ch[3]));
  printf ("%s ^ %s = %s\n", argv[1], argv[2], itobs (j ^ p, ch[4]));
  printf ("%d bits in %s open. \n", bits_open (j), argv[1]);
  printf ("%d bits in %s open. \n", bits_open (p), argv[2]);

  return 0;
}
