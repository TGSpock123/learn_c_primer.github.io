#include "../s_gets.h"

#define NAME_LEN 40

struct name
{
  char f_name[NAME_LEN];
  char l_name[NAME_LEN];
};

int comp (const void * p1, const void * p2);

int main (void)
{
  struct name names[NAME_LEN];
  int j;

  printf ("Please enter names. \n");
  for (j = 0; j < NAME_LEN; j ++)
  {
    printf ("Please enter first name: \n");
    s_gets (names[j].f_name, NAME_LEN);
    if (!(names[j].f_name[0]))
    {
      break;
    }

    printf ("Please enter last name: \n");
    s_gets (names[j].l_name, NAME_LEN);

    printf ("Please enter next name. \n");
  }

  (j != NAME_LEN) ? j ++ : (j = NAME_LEN);

  qsort (names, j, sizeof (names[0]), comp);

  printf ("This is the list of names you've entered: \n");
  for (int p = 0; p < j; p ++)
  {
    printf ("%s %s \n", names[p].f_name, names[p].l_name);
  }

  return 0;
}

int comp (const void * p1, const void * p2)
{
  const struct name * a1 = (const struct name *) p1, * a2 = (const struct name *) p2;

  return (strcmp (a1 -> f_name, a2 -> f_name)) ?
  strcmp (a1 -> f_name, a2 -> f_name) :
  strcmp (a1 -> l_name, a2 ->l_name);
}
