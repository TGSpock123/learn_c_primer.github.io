#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 10

void show_array (const int ar[], int n);

_Static_assert (sizeof (double) == 2 * sizeof (int), "double not twice int size");

int main (void)
{
  int source[SIZE] = {
      0, 1, 2, 3, 4, 5, 6, 7, 8, 9
  }, target[SIZE];

  double curious[SIZE / 2] = {
      2.0, 2.0E5, 2.0E10, 2.0E20, 5.0E30
  };

  puts ("memcpy () used: ");
  puts ("Source value: ");
  show_array (source, SIZE);
  puts ("Target value: ");
  show_array (target, SIZE);

  puts ("\nUsing memmove () with overlapping ranges: ");
  memmove (source + 2, source, 5 * sizeof (int));
  printf ("Source , but 0 - 4 moved to 2 - 6: \n");
  show_array (source, SIZE);

  printf ("\nUsing memcpy () to copy double to int: \n");
  memcpy (target, curious, ((SIZE / 2) * sizeof (double)));
  printf ("Target, but 5 doubles into 10 ints: \n");
  show_array (target, SIZE / 2);
  show_array (target + 5, SIZE / 2);

  return 0;
}

void show_array (const int ar[], int n)
{
  for (int i = 0; i < n; i ++)
  {
    printf ("%d ", ar[i]);
  }

  putchar ('\n');
}
