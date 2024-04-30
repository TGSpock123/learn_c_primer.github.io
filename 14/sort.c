#include "../s_gets.h"
#include "../sort.h"

int main (void)
{
  int arr[] = {
    5, 2, 6
  }, n = sizeof (arr) / sizeof (int);

  sort (arr, 0, n);

  for (int i = 0; i < n; i ++)
  {
    printf ("%d  ", arr[i]);
  }

  return 0;
}

