#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 40

int main (void)
{
  FILE * in, * out;
  int ch;
  char name_0[LEN], name[LEN];
  int count = 0;

  printf ("please enter the waiting compress file: \n");
  scanf ("%s", name_0);

  if (!(in = fopen (name_0, "r")))
  {
    fprintf (stderr, "i couldn't open the file \"%s\"\n", name_0);
    exit (EXIT_FAILURE);
  }
  else;

  strncpy (name, name_0, LEN - 5);
  name[LEN - 5] = '\0';
  strcat (name, ".red");

  if (!(out = fopen (name, "w")))
  {
    fprintf (stderr, "can't create oupput file. \n");
    exit (3);
  }
  else;

  while ((ch = getc(in)) != EOF)
  {
    if (count ++ % 3 == 0)
    {
      putc (ch, out);
    }
    else;
  }

  if (fclose(in) || fclose(out))
  {
    fprintf(stderr, "error in closing files. \n");
  }
  else;

  return 0;
}