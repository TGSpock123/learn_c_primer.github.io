#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void on_screen (char ch, FILE * fp, char * str);
int main (int argc, char * argv[])
{
  FILE * fp;
  char ch_1;

  if (argc == 1)
  {
    printf ("please enter a character: \n");
    scanf ("%c", &ch_1);
    getchar ();
    printf ("please enter the file name: \n");
    for (char buf[256];
    fgets (buf, sizeof (buf), stdin), buf[0] != '\n';
    buf[strcspn(buf, "\n")] = '\0',
    on_screen (ch_1, fp, buf),
    printf ("please enter next file. \n"));
  }else if (argc >= 3)
  {
    if (! (ch_1 = argv[1][0]))
    {
      printf ("read character failed. \n");
      exit (EXIT_FAILURE);
    }else;

    for (int i = 2; i < argc; i ++)
    {
      on_screen (ch_1, fp, argv[i]);
    }
  }else
  {
    printf ("no enough parameters. \n");
    exit (EXIT_FAILURE);
  }

  printf ("thank you for using. \n");

  return 0;
}
void on_screen (char ch, FILE * fp, char * str)
{
  int count = 0;

  if (!(fp = fopen (str, "r")))
  {
    printf ("can't open file %s. \n", str);
    return;
  }

  for (char ch_2; (ch_2 = getc (fp)) != EOF; (ch_2 == ch) ? count ++: count);
  printf ("%c appears in %s for %d %s. \n", ch, str, count, (count == 0 || count == 1) ? "time" : "times");

  fclose (fp);
}
