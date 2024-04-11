#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int main (void)
{
  FILE * fp1, * fp2;
  char f_name_1[50], f_name_2[50];

  printf ("this program turns lower into upper. \n");
  printf ("please enter the first file name: \n");
  scanf ("%s", f_name_1);
  printf ("now enter the second file name: \n");
  scanf ("%s", f_name_2);

  if ((fp1 = fopen (f_name_1, "r")) == NULL)
  {
    printf("error opening %s. \n", f_name_1);
    exit(EXIT_FAILURE);
  }else;

  if ((fp2 = fopen (f_name_2, "w")) == NULL)
  {
    printf("error opening %s. \n", f_name_2);
    exit(EXIT_FAILURE);
  }else;

  for (char ch; (ch = getc (fp1)) != EOF; islower (ch) ? putc (toupper (ch), fp2): putc (ch, fp2));

  fclose (fp1);
  fclose (fp2);
  return 0;
}