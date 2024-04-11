#include <stdio.h>
#include <stdlib.h>
int main (int argc, char * argv[])
{
  FILE * fp1, * fp2;

  if (argc != 3)
  {
    printf ("negative enter. \n");
    exit (EXIT_FAILURE);
  }else;

  if ((fp1 = fopen (argv[1], "r")) == NULL)
  {
    printf("error opening %s. \n", argv[1]);
    exit(EXIT_FAILURE);
  }else;

  if ((fp2 = fopen (argv[2], "w")) == NULL)
  {
    printf("error opening %s. \n", argv[2]);
    exit(EXIT_FAILURE);
  }else;

  for (char ch; (ch = getc(fp1)) != EOF; putc(ch, fp2));

  fclose (fp1);
  fclose (fp2);
  return 0;
}