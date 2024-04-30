#include <stdio.h>
#include <math.h>
double sour[200];
double targ[200];

double sins (double sours);
void transform (double source[], double target[], int p, double sins (double));

int main (void)
{
  int j;

  for (j = 0; j < 200; j ++)
  {
    sour[j] = j + 1;
  }

  printf ("Please enter how many numbers to transform, q to quit: \n");
  scanf ("%d", &j);
  while (getchar () != '\n');

  if ((j > 200) || (j < 1))
  {
    printf ("More than array. ");
    return 0;
  }

  transform (sour, targ, j, sins);

  for (j = 0; j < 200; j ++)
  {
    printf ("%3.2lf ", targ[j]);
    if (!((j + 1) % 8))
    {
      putchar ('\n');
    }
  }

  return 0;
}

double sins (double sours)
{
  double ret = sqrt (sours);
  return ret;
}

void transform (double source[], double target[], int p, double sins (double))
{
  for (int i = 0; i < p; i ++)
  {
    target[i] = sins (source[i]);
  }
  for (int i = p; i < 200; i ++)
  {
    target[i] = source[i];
  }
}
