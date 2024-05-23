#include "17.19.h"
#include <stdio.h>
#include <stdlib.h>

static int my_comp (const void * p1, const void * p2);
static int * search_core (int * left, int * right, int cop);

int input_array (int * arr)
{
  int count;
  printf ("Please enter numbers. \n");

  for (count = 0; count < MAX_SIZE; count ++, arr ++)
  {
    if (!scanf ("%d", arr))
    {
      while (getchar () != '\n');
      break;
    }
    while (getchar () != '\n');
  }

  if (count == MAX_SIZE)
  {
    printf ("No room to input. \n");
  }

  return count;
}

int search (int * nums, int numsize, int target)
{
  int * left = nums, * right = nums + numsize - 1;
  int * ret;

  qsort (nums, numsize, sizeof (int), my_comp);

  ret = search_core (left, right, target);

  return (ret) ? (ret - left) : (-1);
}

int my_comp (const void * p1, const void * p2)
{
  const int * a1 = (const int *) p1, * a2 = (const int *) p2;

  return (!(*a1 - *a2)) ? 0 : ((*a1 > *a2) ? 1 : -1);
}

int * search_core (int * left, int * right, int cop)
{
  int * mid = left + (right - left) / 2;

  if (left > right)
  {
    return NULL;
  }

  if (cop == *mid)
  {
    return mid;
  }

  return (cop > *mid) ? (search_core (mid + 1, right, cop)) : (search_core (left, mid - 1, cop));
}

//leetcode过了, 自己编译运行反倒出错;
//可以了;