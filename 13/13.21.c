#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (int argc, char * argv[])
{
  FILE * fp;
  char * str_1 = argv[1], buf[256];

  if (argc < 3)
  {
    printf ("no enough parameter in %s. \n", argv[0]);
    exit (EXIT_FAILURE);
  }

  if (! (fp = fopen(argv[2], "r")))
  {
    printf ("unable to open %s. \n", argv[2]);
    exit (EXIT_FAILURE);
  }

  while (fgets (buf, 255, fp))
  {
    if (strstr (buf, str_1))
    {
      fputs (buf, stdout);
    }
  }

  return 0;
}