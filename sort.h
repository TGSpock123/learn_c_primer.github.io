void sort (int * arr, int low, int high);
int q_s (int * arr, int low, int high);
int q_s1 (int * arr, int low, int high);
void sort_core (int * j, int * p);

void sort (int * arr, int low, int high)
{
  high -= 1;
  int standard;

  if (low < high)
  {
    standard = q_s1 (arr, low, high);
    sort (arr, low, standard);
    sort (arr, standard + 1, high + 1);
  }
}

int q_s (int * arr, int low, int high)
{
  for (int i = low + 1; i <= high; )
  {
    if (arr[low] <= arr[i])
    {
      sort_core (&arr[i], &arr[high]);
      high --;
    }else
    {
      i ++;
    }
  }

  sort_core (&arr[low], &arr[high]);

  return high;
}

int q_s1 (int * arr, int low, int high)
{
  int pot = 0;

  while (low < high)
  {
    if (arr[low] > arr[high])
    {
      sort_core (&arr[low], &arr[high]);
      (pot == 0) ? (pot = 1) : (pot = 0);
    }else
    {
      (pot == 0) ? (high --) : (low ++);
    }
  }

  return high;
}

void sort_core (int * j, int * p)
{
  int temp;

  temp = *j;
  *j = *p;
  *p = temp;
}
