#include <stdio.h>

int partition (int arr[], int low, int high, int arr1[]);
void quicksort (int arr[], int low, int high, int arr1[]);
void sort_core (int * j, int * p);

int main()
{
  int arr[] = {34, 7, 23, 32, 5, 13};
  int n = sizeof(arr) / sizeof(arr[0]);
  int arr1[n];

  quicksort(arr, 0, n - 1, arr1);

  printf("Sorted array: ");

  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }

  return 0;
}

void quicksort (int arr[], int low, int high, int arr1[])
{
  if (low < high)
  {
    int pivot_index = partition (arr, low, high, arr1);
    quicksort (arr, low, pivot_index - 1, arr1);
    quicksort (arr, pivot_index + 1, high, arr1);
  }
}

int partition(int arr[], int low, int high, int arr1[])
{
  int pivot = arr[high];
  int i = low - 1;

  for (int j = low; j < high; j++)
  {
    if (arr[j] < pivot)
    {
      i ++;
      sort_core (&arr[i], &arr[j]);
    }
  }

  sort_core (&arr[i + 1], &arr[high]);

  return i + 1;
}

void sort_core (int * j, int * p)
{
  int temp;

  temp = *j;
  *j = *p;
  *p = temp;
}