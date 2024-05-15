#include "16.7_8.h"

void get_names (names * pn)
{
  printf ("Please enter your first name: \n");
  s_gets (pn -> first, SLEN);
  printf ("Please enter your last name: \n");
  s_gets (pn -> last, SLEN);
}

void show_names (const names * pn)
{
  printf ("%s %s ", pn -> first, pn -> last);
}
