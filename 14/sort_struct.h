#define MAXTITL 30
#define MAXBK 100

struct book
{
  char title[MAXTITL], author[MAXTITL];
  float value;
};

void sort (double * arr, int * arr1, int low, int high);
int q_s (double * arr, int * arr1, int low, int high);
void sort_core (double * j, double * p);
void sort_core1 (int * j, int * p);

void sort (double * arr, int * arr1, int low, int high)
{
  high -= 1;
  int standard;

  if (low < high)
  {
    standard = q_s (arr, arr1, low, high);
    sort (arr, arr1, low, standard);
    sort (arr, arr1, standard + 1, high + 1);
  }
}

int q_s (double * arr, int * arr1, int low, int high)
{
  for (int i = low + 1; i <= high; )
  {
    if (arr[low] <= arr[i])
    {
      sort_core (&arr[i], &arr[high]);
      sort_core1 (&arr1[i], &arr1[high]);
      high --;
    }else
    {
      i ++;
    }
  }

  sort_core (&arr[low], &arr[high]);
  sort_core1 (&arr1[low], &arr1[high]);

  return high;
}

void sort_core (double * j, double * p)
{
  double temp;

  temp = *j;
  *j = *p;
  *p = temp;
}

void sort_core1 (int * j, int * p)
{
  int temp;

  temp = *j;
  *j = *p;
  *p = temp;
}