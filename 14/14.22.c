#include "14.22.h"
int main (void)
{
  long long ret[3];
  int year[2], mo_is_found = 0, keep[2];
  char * th[] = {"st", "nd", "rd"};
  struct month * mo = all_mon;

  printf ("What year do you want to start? \n");
  input_y (&year[1]);

  mon_val (mo, year[1]);

  printf ("Please enter number, abbreviate or name of that month: \n");
  get_month (&mo_is_found, 1);

  if (!mo_is_found)
  {
    printf ("No such month. \n");
    printf ("\nPress any key to end programme. \n");
    getchar ();
    return 0;
  }

  printf ("Please enter what day is it that today. \n");
  input_d (&ret[1], mo_mabe[1]);
  keep[1] = ret[1];

  give_val (&ret[1], mo_mabe[1]);

  printf ("What year is it now? \n");
  input_y (&year[0]);

  mon_val (mo, year[0]);

  printf ("Please enter number, abbreviate or name of this month: \n");
  get_month (&mo_is_found, 0);

  if (!mo_is_found)
  {
    printf ("No such month. \n");
    printf ("\nPress any key to end programme. \n");
    getchar ();
    return 0;
  }

  printf ("Please enter what day is it today. \n");
  input_d (&ret[0], mo_mabe[0]);
  keep[0] = ret[0];

  give_val (&ret[0], mo_mabe[0]);

  ret[2] = ret[0] - ret[1] + 1;
  if (year[0] > year[1])
  {
    for (int j = year[1]; j < year[0]; j ++)
    {
      ret[2] += (j % 4 == 0) ? 366: 365;
    }
  }else if (year[0] < year[1])
  {
    for (int p = year[1]; p > year[0]; p --)
    {
      ret[2] -= (p % 4 == 0) ? 366: 365;
    }
  }

  printf ("From %d %s %d%s to %d %s %d%s have %lld days. \n",
          year[1], all_mon[mo_mabe[1] - 1].month, keep[1], (keep[1] > 3) ? "th" : th[keep[1] - 1],
          year[0], all_mon[mo_mabe[0] - 1].month, keep[0], (keep[0] > 3) ? "th" : th[keep[0] - 1], ret[2]);
  printf ("\nPress any key to end this programme. \n");
  getchar ();

  return 0;
}