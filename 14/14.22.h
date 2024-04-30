#include "../s_gets.h"
#define MONTHS 12

struct month
{
  char month[10];
  char * mon;
  int days;
  int mon_no;
}all_mon[MONTHS];

char * mon[] = {
    "", "JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG",
    "SEP", "OCT", "NOV", "DEC"
};

enum mont
{
  JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
}mo_mabe[2];

void input_y (int * year)
{
  while (! (scanf ("%d", year)))
  {
    printf ("Please enter a year number. \n");
    getchar ();
  }
  getchar ();
}

void input_d (long long * ret, int mo_maybe)
{
  while ((!(scanf ("%lld", ret))) || (*ret > all_mon[mo_maybe - 1].days) || (*ret < 1))
  {
    printf ("Please enter a number of day. \n");
    getchar ();
  }
  getchar ();
}

void mon_val (struct month * months, int year)
{
  char month[13][10] = {
      "", "January", "February", "March", "April", "May", "June", "July",
      "August", "September", "October", "November", "December"
  }, * assign = mon[1];

  for (int i = 0; i < MONTHS; months ++, assign += 4)
  {
    months -> mon_no = (i ++) + 1;
    strcpy (months -> month, month[i]);
    months -> mon = assign;

    switch (i)
    {
      case 1:
      case 3:
      case 5:
      case 7:
      case 8:
      case 10:
      case 12:
        months -> days = 31;
        break;
      case 4:
      case 6:
      case 9:
      case 11:
        months -> days = 30;
        break;
      case 2:
        (year% 4 == 0) ? (months -> days = 29) : (months -> days = 28);
        break;
    }
  }
}

void get_month (int * mo_is_found, int i)
{
  char inp[4], * inp_totr;

  s_gets (inp, 4);

  if (isdigit (inp[0]))
  {
    (isdigit (inp[1])) ? (mo_mabe[i] = (inp[0] - 48) * 10 + inp[1] - 48) : (mo_mabe[i] = inp[0] - 48);

    if ((mo_mabe[i] <= 12) && (mo_mabe[i] >= 1))
    {
      *mo_is_found = 1;
    }
  } else if (isalpha (inp[0]))
  {
    inp_totr = inp;

    while (*inp_totr)
    {
      *inp_totr = toupper (*inp_totr);
      inp_totr ++;
    }

    for (mo_mabe[i] = JAN; mo_mabe[i] <= DEC; mo_mabe[i] ++)
    {
      if (strcmp (inp, mon[mo_mabe[i]]) == 0)
      {
        *mo_is_found = 1;
        break;
      }
    }
  }else if (! inp[0])
  {
    printf ("Thank you for using. \n");
    exit (0);
  }
}

void give_val (long long * ret, int mo_maybe)
{
  switch (mo_maybe - 1)
  {
    case DEC:
      *ret += all_mon[DEC - 1] . days;
    case NOV:
      *ret += all_mon[NOV - 1] . days;
    case OCT:
      *ret += all_mon[OCT - 1] . days;
    case SEP:
      *ret += all_mon[SEP - 1] . days;
    case AUG:
      *ret += all_mon[AUG - 1] . days;
    case JUL:
      *ret += all_mon[JUL - 1] . days;
    case JUN:
      *ret += all_mon[JUN - 1] . days;
    case MAY:
      *ret += all_mon[MAY - 1] . days;
    case APR:
      *ret += all_mon[APR - 1] . days;
    case MAR:
      *ret += all_mon[MAR - 1] . days;
    case FEB:
      *ret += all_mon[FEB - 1] . days;
    case JAN:
      *ret += all_mon[JAN - 1] . days;
      break;
  }
}