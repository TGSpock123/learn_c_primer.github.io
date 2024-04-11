#include <stdio.h>
#include <stdlib.h>
int main (int argc, char * argv[])
{
  FILE * fp;
  int stw;
  char ch;

  if (argc < 2)
  {
    printf ("no enough parameters. \n");
    exit (EXIT_FAILURE);
  }

  if (!(fp = fopen (argv[1], "r")))
  {
    fprintf(stdout, "Can't open %s. \n", argv[1]);
    exit(EXIT_FAILURE);
  }

  printf ("please enter a number, bigger than 0: \n");
  while (scanf ("%d", &stw) != 1)
  {
    printf ("please enter a number. \n");
    getchar();
  }

  while (stw < 0)
  {
    printf ("please enter a number bigger than 0! \n");
    scanf ("%d", &stw);
    getchar();
  }

  while (stw >= 0)
  {
    if (! (fseek (fp, stw, SEEK_SET)))
    {
      if ((ch = getc (fp)) == '\n' || (ch = getc(fp)) == EOF)
      {
        printf ("bingo %s. \n", (ch == '\n') ? "\\n" : "EOF");
      }else
      {
        fseek (fp, stw, SEEK_SET);
        while ((ch = getc (fp)) != '\n' && ch != EOF)
        {
          putchar (ch);
        }
        putchar ('\n');
      }
    }else
    {
      printf ("this character is out of %s, please enter another. \n", argv[1]);
    }
    printf ("please enter another number, q to quit: \n");
    if ((scanf ("%d", &stw)) != 1)
    {
      break;
    }
    getchar();
  }

  printf ("thank you. \n");

  fclose (fp);
  return 0;
}