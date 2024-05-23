#include "17.19.h"
#include <stdio.h>

int main (void)
{
  int arr[MAX_SIZE], numsize;
  int target;

  numsize = input_array (arr);

  printf ("Please enter the number you want to find. \n");
  scanf ("%d", &target);
  while (getchar () != '\n');
  printf ("%d. \n", search (arr, numsize, target));

  printf ("Thank you for using. \n");
}
