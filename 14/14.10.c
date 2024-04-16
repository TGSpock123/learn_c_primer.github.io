#include <stdio.h>
#include <stdlib.h>

//如下声明的结构具备伸缩特性, 该结构不能直接拷贝, 须使用memcpy()进行拷贝;
struct flex
{
  int count;
  double average;
  double scores[];
};

int main (void)
{
  struct flex * pf = malloc (sizeof (struct flex) + 5 * sizeof (double));
  struct flex * asdf = malloc (sizeof (struct flex) + 9 * sizeof (double));

  printf ("please enter 5 numbers. \n");
  for (int j = 0; j < 5; j ++)
  {
    scanf ("%lf", &pf -> scores[j]);
  }
  for (int p = 0; p < 5; p ++)
  {
    printf ("%lf  ", pf -> scores[p]);
  }
  putchar ('\n');

  printf ("please enter 9 numbers. \n");
  for (int j = 0; j < 9; j ++)
  {
    scanf ("%lf", &asdf -> scores[j]);
  }
  for (int p = 0; p < 9; p ++)
  {
    printf ("%lf  ", asdf -> scores[p]);
  }
  putchar ('\n');

  free (pf);
  free (asdf);
  return 0;
}