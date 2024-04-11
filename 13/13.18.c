#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void on_screen (FILE * fp1, FILE * fp2);
void on_screen_2 (FILE * fp1, FILE * fp2);
int main (int argc, char * argv[])
{
  FILE * fp1, * fp2;

  if (argc < 3)
  {
    printf ("no enough parameters. \n");
    exit (EXIT_FAILURE);
  }else;

  if (!(fp1 = fopen (argv[1], "r")))
  {
    printf ("open %s failed. \n", argv[1]);
    exit (EXIT_FAILURE);
  }else;

  if (!(fp2 = fopen (argv[2], "r")))
  {
    printf ("open %s failed. \n", argv[2]);
    exit (EXIT_FAILURE);
  }else;

  on_screen (fp1, fp2);
  on_screen_2 (fp1, fp2);

  fclose (fp1);
  fclose (fp2);
  return 0;
}

void on_screen (FILE * fp1, FILE * fp2)
{
  fseek (fp1, 0, SEEK_SET);
  fseek (fp2, 0, SEEK_SET);

  for (char line_1[256], line_2[256];
       fgets (line_1, 256, fp1) && fgets (line_2, 256, fp2);
       (line_1[0] != '\0') ? fputs (line_1, stdout): fputs("", stdout),
       (line_2[0] != '\0') ? fputs (line_2, stdout): fputs("", stdout));

  for (char ch; (ch = getc (fp1)) != EOF; putc (ch, stdout));

  for (char ch; (ch = getc (fp2)) != EOF; putc (ch, stdout));
}

void on_screen_2 (FILE * fp1, FILE * fp2)
{
  fseek (fp1, 0, SEEK_SET);
  fseek (fp2, 0, SEEK_SET);

  for (char line_1[256], line_2[256];
       fgets (line_1, 256, fp1) && fgets (line_2, 256, fp2);
       line_1[strlen (line_1) - 1] = '\0',
       (line_1[0] != '\0') ? fputs (line_1, stdout): fputs("", stdout),
       (line_2[0] != '\0') ? fputs (line_2, stdout): fputs("", stdout));

  for (char ch; (ch = getc (fp1)) != EOF; putc (ch, stdout));

  for (char ch; (ch = getc (fp2)) != EOF; putc (ch, stdout));
}