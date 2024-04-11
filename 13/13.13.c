#include <stdio.h>
#include <stdlib.h>
int main (void)
{
  int ch;
  FILE * fp;
  unsigned long count = 0;
  char str[50];

  printf ("please enter file's name: \n");
  scanf ("%s", str);

  if (!(fp = fopen(str, "r")))
  {
    printf ("can't open %s\n", str);
    exit (EXIT_FAILURE);
  }
  else;

  while ((ch = getc(fp)) != EOF)
  {
    putc (ch, stdout);
    count ++;
  }

  if (fclose(fp))
  {
    printf ("error in closing file %s\n", str);
  }
  else;

  printf ("file %s has %lu characters\n", str, count);

  return 0;
}
